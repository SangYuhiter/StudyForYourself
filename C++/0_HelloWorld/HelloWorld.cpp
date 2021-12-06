#include "HelloWorld.h"

void SayHello(std::string name)
{
    std::cout<<"Hello World!"<<name<<"!"<<std::endl;
}

int main()
{
    std::string name;
    std::cout<<"Entry your name:";
    std::getline(std::cin,name);
    if(name != "")
    {
        SayHello(name);
    }
    else
    {
        SayHello();
    }
    return 0;
}
