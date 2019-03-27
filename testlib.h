#pragma once

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
