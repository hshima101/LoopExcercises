#ifndef _LOOPS_H_
#define _LOOPS_H_
#include <iostream>
#include <cstring>

class Loops
{
    public:
        Loops();

        ~Loops();

        void ForLoop();

        void RangeBase();

        void RangeAuto();

        void RangeAutoFill();

        void Iterator();

    private:
        int array[5] = {1,2,3,4,5};

};

#endif