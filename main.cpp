// Example code, to show the usage of testlib, not using lambda functions

#include <iostream>
#include "testlib.h"


bool hello1()
{
    std::cerr << "Hello1" << std::endl;
    return true;
}

bool hello2()
{
    std::cout << "Hello2" << std::endl;
    return false;
}

bool hello3()
{
    std::cout << "Hello3" << std::endl;
    return false;
}

int main()
{
    tst::TestStack stack;
    stack.push(hello1);
    stack.push(hello2);
    stack.push(hello3);
    stack.run_tests();
    return 0;
}
