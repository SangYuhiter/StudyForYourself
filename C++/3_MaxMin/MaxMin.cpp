#include <iostream>
#include "MaxMin.h"

int Max(int x,int y)
{
    return x>y?x:y;
}
int Min(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int a,b;
    std::cout<<"Entry 2 numbers:";
    std::cin>>a>>b;
    std::cout<<"("<<a<<","<<b<<"),max:"<<Max(a,b)<<",min:"<<Min(a,b)<<std::endl;
    return 0;
}
