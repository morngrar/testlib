#pragma once

#include <vector>
#include <string>

namespace tst
{
    class TestStack {
        std::vector<bool (*)()> functions;

    public:
        void push(bool (*function)());
        bool run_tests();
    };

    void failed_report(std::string func_name, std::string msg, std::string ret);
}
