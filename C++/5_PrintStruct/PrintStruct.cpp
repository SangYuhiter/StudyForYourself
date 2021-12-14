#include <iostream>
#include <cstring>
#include "PrintStruct.h"

int main()
{
    int a,b;
    std::cout<<"Entry two num:";
    std::cin>>a>>b;
    COMPLEX r(a,b);
    r.Print_Complex();
    std::cout<<"print Complex struct!"<<std::endl;

    {
        static const unsigned int result_num = 100;
	static const unsigned int temp_num = 10;
	static const unsigned int line_count = 4;
        char result[result_num];
	memset(result,0,result_num);
	char temp[temp_num];
	memset(temp,0,temp_num);

	unsigned char* puchar = (unsigned char*)&r;
	for(size_t i = 0;i < sizeof(COMPLEX);i++)
	{
	    if((i+1)%line_count == 0 && i != 0)
	    {
	        sprintf(temp,"%02x\n",*(puchar+i));
	    }
	    else
	    {
	        sprintf(temp,"%02x ",*(puchar+i));
	    }
	    strcat(result,temp);
	}
	printf("reuslt:\n%s\n",result);
    }
    return 0;
}
