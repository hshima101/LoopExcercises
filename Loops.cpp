#include <iostream>
#include <cstring>
#include "Loops.h"

Loops::Loops()
{
    ForLoop();
    RangeBase();
    RangeAutoFill();
    Iterator();
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

void Loops::Iterator()
{
    int *beg = std::begin(array);
    int *end = std::end(array);

    while(beg != end)
    {
        std::cout<< *beg << " ";
        ++beg;
    }
    std::cout<<std::endl;
};