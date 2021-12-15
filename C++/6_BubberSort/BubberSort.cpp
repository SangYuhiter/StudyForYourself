#include <iostream>
#include "BubberSort.h" 

void BubberSort(std::vector<int>& input_vec)
{
    for(size_t i = 0;i<input_vec.size()-1;i++)
    {
        for(size_t j = 0;j<input_vec.size()-1;j++)
        {
            if(input_vec[j]>input_vec[j+1])
	    {
		int temp = input_vec[j+1];
		input_vec[j+1] = input_vec[j];
		input_vec[j] = temp;
	    }
	}
	std::cout<<"sort loop "<<i<<":\t";
	for(size_t k = 0;k<input_vec.size();k++)
	{
	    std::cout<<input_vec[k]<<"\t";
	}
	std::cout<<std::endl;
    }
}

int main()
{
    std::vector<int> test;
    int num;
    std::cout<<"Entry sum num:";
    while(std::cin>>num)
    {
        test.push_back(num);
	if(std::cin.get() == '\n')
	    break;
    }
    std::cout<<"before number:\t";
    for(size_t j = 0;j<test.size();j++)
    {
        std::cout<<test[j]<<"\t";
    }
    std::cout<<std::endl;
    BubberSort(test);
    std::cout<<"sort result:\t";
    for(size_t j = 0;j<test.size();j++)
    {
        std::cout<<test[j]<<"\t";
    }
    std::cout<<std::endl;
    return 0;
}
