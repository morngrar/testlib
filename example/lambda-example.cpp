#include <iostream>
#include <string>
#include "testlib.h"


// Function to be  tested
int add(int a, int b)
{
    return a + b;
}


int main()
{
    tst::TestStack stack;

    // Tests that the add function adds correctly the numbers 2 and 5
    stack.push(
        [](){
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
    );

    // Tests that the add function correctly adds 4 and 4
    stack.push(
        [](){
            int ret = add(4, 4);
            if (ret != 8) {
                tst::failed_report(
                    "add()",
                    "4 + 4 should be 8.",
                    std::to_string(ret)
                );
                return false;
            } else {
                return true;
            }
        }
    );

    stack.run_tests();  // Runs tests and outputs result.

    return 0;
}
