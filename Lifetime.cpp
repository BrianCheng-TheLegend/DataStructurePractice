#include<iostream>

class En
{
public:
    En()
    {
        std::cout<<"Created Entity!"<<std::endl;
    }
    ~En()
    {
        std::cout<<"Destroyed Entity!"<<std::endl;
    }
};

int main()
{
    {
        En e;
    }

    std::cin.get();
}