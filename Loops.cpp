#include <iostream>
#include <cstring>
#include "Loops.h"

Loops::Loops()
{
    ForLoop();
    RangeBase();
    RangeAutoFill();
};

Loops::~Loops()
{

};

void Loops::ForLoop()
{
    std::cout<<"Integer For Loop"<<std::endl;
    for(int i = 0; i < 5; i++)
    {
        std::cout<< array[i];
    }
    std::cout<<std::endl;
};

void Loops::RangeBase()
{
    for(int x: array)
    {
        std::cout<< x;
    }
    std::cout<<std::endl;
};

void Loops::RangeAuto()
{
    for(auto & x : array)
    {
        std::cout<< x;
    }
    std::cout<<std::endl;
}

void Loops::RangeAutoFill()
{
    for(auto x: {1,2,3,4,5})
    {
        std::cout<<x;
    }
    std::cout<<std::endl;
}