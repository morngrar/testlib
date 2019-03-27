// Copyright © 2018, 2019 Svein-Kåre Bjørnsen

// This file is part of testlib.

// testlib is free software: you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the
// Free Software Foundation, either version 3 of the License, or (at your
// option) any later version.

// testlib is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public License
// along with testlib.  If not, see <https://www.gnu.org/licenses/>.

#include <iostream>
#include "testlib.h"

namespace tst
{
    void TestStack::push(bool (*function)())
    {
        functions.push_back(function);
    }

    // Runs all tests on stack
    bool TestStack::run_tests()
    {
        int passed = 0;
        int failed = 0;
        int total = 0;

        for (auto function : functions) {
            if (function())
                passed++;
            else
                failed++;
            total++;
        }

        std::cout << "\nRan " << total << " tests.\n"
                  << passed << " passed\n"
                  << failed << " failed\n" << std::endl;

        if (failed)
            return false;
        else
            return true;
    }

    // A prettified output of a failed test, to be called by test-functions
    void failed_report(
        std::string func_name,
        std::string msg,
        std::string retval)
    {
        std::cerr
            << func_name << " --> " << msg
            << "\n\tReturned value: " << retval
            << std::endl;
    }
}
