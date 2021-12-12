#include <iostream>
#include "MaxMin.h"

int main()
{
    int a,b;
    std::cout<<"Entry 2 numbers:";
    std::cin>>a>>b;
    std::cout<<"("<<a<<","<<b<<"),max:"<<MAX(a,b)<<",min:"<<MIN(a,b)<<std:endl;
    return 0;
}
