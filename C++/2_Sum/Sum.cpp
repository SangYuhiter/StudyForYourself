#include <iostream>
#include "Sum.h"

int SumInt(std::vector<int> input_list)
{
    int result = 0;
    for(int num : input_list)
    {
        result += num;
    }
    return result;
}

int main()
{
    std::vector<int> input;
    for(int i = 0;i<100;i++)
    {
        input.push_back(i);
    }
    std::cout<<"1 add to 99 = "<<SumInt(input)<<std::endl;
    return 0;
}
