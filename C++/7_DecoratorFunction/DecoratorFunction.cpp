/*************************************************************************
 @File Name    : DecoratorFunction.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2023年07月29日 星期六 16时49分43秒
 @Description  : 
 ************************************************************************/

#include <ctime>
#include <cstdio>
#include <string>
#include <functional>

template<typename = void, typename... Ts>
auto decorateLogBeginEnd(std::function<void(Ts...)> fn, std::string info)
{
    auto inner = [&](Ts... args){
        printf("%s decorate void function begin!!!\n", info.c_str());
        fn(args...);
        printf("%s decorate void function end!!!\n", info.c_str());
    };
    return inner;
}

template<typename R, typename... Ts>
auto decorateLogBeginEnd(std::function<R(Ts...)> fn, std::string info)
{
    auto inner = [&](Ts... args)->R{
        printf("%s decorate non-void function begin!!!\n", info.c_str());
        R result = fn(args...);
        printf("%s decorate non-void function end!!!\n", info.c_str());
        return result;
    };
    return inner;
}

template<typename = void, typename... Ts>
auto decorateCostTime(std::function<void(Ts...)> fn, std::string info)
{
    auto inner = [&](Ts... args){
        clock_t start,end;
        double costTimeInMs = 0;
        start = clock();
        fn(args...);
        end = clock();
        costTimeInMs = (double)(end - start) / CLOCKS_PER_SEC * 1000;
        printf("%s costTimeInMs:%fms\n", info.c_str(), costTimeInMs);
    };
    return inner;
}

template<typename R, typename... Ts>
auto decorateCostTime(std::function<R(Ts...)> fn, std::string info)
{
    auto inner = [&](Ts... args)->R{
        clock_t start,end;
        double costTimeInMs = 0;
        start = clock();
        R result = fn(args...);
        end = clock();
        costTimeInMs = (double)(end - start) / CLOCKS_PER_SEC * 1000;
        printf("%s costTimeInMs:%fms\n", info.c_str(), costTimeInMs);
        return result;
    };
    return inner;
}

void func()
{
    printf("func run here\n");
}

int func2(int a, int b)
{
    printf("func2 run a+b=%d\n", a+b);
    return a + b;
}

int main(){
    std::function<void()> f1 = func;
    std::function<int(int,int)> f2 = func2;
    decorateLogBeginEnd<void>(f1, "caller:func")();
    int result = decorateLogBeginEnd<int,int,int>(f2, "caller:func2")(1,3);
    printf("result=%d\n", result);
    decorateCostTime<void>(f1, "function_name:func")();
    result = decorateCostTime<int,int,int>(f2, "function_name:func2")(1,3);
    return 0;
}
