#ifndef _PRINTSTRUCT_HEAD_
#define _PRINTSTRUCT_HEAD_

#include <iostream>

typedef struct Complex
{
    int real_num;
    int virtual_num;
    Complex():real_num(0),virtual_num(0){};
    Complex(int a,int b):real_num(a),virtual_num(b){};
    void Print_Complex()
    {
        std::cout<<real_num<<"+"<<virtual_num<<"i"<<std::endl;
    };
}COMPLEX;

#endif
