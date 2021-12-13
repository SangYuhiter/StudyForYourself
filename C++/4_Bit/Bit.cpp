#include <iostream>
#include "Bit.h"

int main()
{
    int a,b;
    std::cout<<"Entry 2 numbers:";
    std::cin>>a>>b;
	int NOTa = NOT(a), NOTb = NOT(b),aANDb = AND(a,b),aORb = OR(a,b),aXORb = XOR(a,b);
    std::cout<<"("<<a<<","<<b<<"),not:("<<NOTa<<","<<NOTb<<"),and:"<<aANDb<<",or:"<<aORb<<",xor:"<<aXORb<<std::endl;
    return 0;
}
