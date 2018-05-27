#include <iostream>
#include "testing.h"

int add(int a, int b)
{
    return a + b;
}

bool test_add()
{
    int ret  = add(2, 5);
    if (ret != 7) {
        std::cerr << "add() --> 2 + 5 should be 7. Was " << ret << std::endl;
        return false;
    } else {
        return true;
    }
}

int main()
{
    tst::TestStack stack;
    stack.push(test_add);
    stack.run_tests();

    return 0;
}
