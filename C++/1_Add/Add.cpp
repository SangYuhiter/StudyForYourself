#include <iostream>
#include "Add.h"

int AddInt(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1,num2;
    std::cout<<"Entry two number:";
	std::cin>>num1>>num2;
	std::cout<<"num1+num2:"<<num1<<"+"<<num2<<"="<<AddInt(num1,num2)<<std::endl;
    return 0;
}
