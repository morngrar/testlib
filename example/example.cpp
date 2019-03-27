#include <iostream>
#include <string>
#include "testlib.h"


// Function to be  tested
int add(int a, int b)
{
    return a + b;
}


// Testing function -- must return true on pass, and false on fail.
bool testing_add()
{
    int ret  = add(2, 5);
    if (ret != 7) {
        tst::failed_report( // Prettifies output. See header file.
            "add()",
            "2 + 5 should be 7.",
            std::to_string(ret)
        );
        return false;
    } else {
        return true;
    }
}

bool another_test()
{
    int ret = add(4, 4);
    if (ret != 8) {
        tst::failed_report(
            "add()",
            "4 + 4 should be 8.",
            std::to_string(ret)  // this requires C++11 compilation (or later)
        );
        return false;
    } else {
        return true;
    }
}


int main()
{
    tst::TestStack stack;

    stack.push(testing_add);
    stack.push(another_test);

    stack.run_tests();  // Runs tests and outputs result.

    return 0;
}
