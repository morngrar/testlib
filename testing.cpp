#include <iostream>
#include "testing.h"

namespace tst
{
  void TestStack::push(bool (*function)())
  {
      functions.push_back(function);
  }

  bool TestStack::run_tests()
  {
      int passed = 0;
      int failed = 0;
      int total = 0;

      for (function : functions) {
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

  void failed_report(std::string func_name, std::string msg, std::string retval)
  {
      std::cerr
          << func_name << " --> " << msg
          << "\n\tReturned value: " << retval
          << std::endl;
  }
}
