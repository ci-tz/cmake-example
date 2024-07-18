#include "part1/lib_one.h"
#include "part2/lib_two.h"
#include "part3/lib_three.h"

#include <iostream>

int main() {
  // Use the classes from the libraries
  learn_cmake::LibOne one;
  learn_cmake::LibTwo two;
  learn_cmake::LibThree three;

  // Test library one
  std::cout << "------TESTING LIBRARY ONE------" << std::endl;
  one.PrintHello();
  one.PrintGoodbye();
  std::cout << "------END TESTING LIBRARY ONE------\n" << std::endl;

  // Test library two
  std::cout << "------TESTING LIBRARY TWO------" << std::endl;
  two.SetValue(42);
  two.PrintValue();
  two.SetValue(100);
  two.PrintValue();
  std::cout << "------END TESTING LIBRARY TWO------\n" << std::endl;

  // Test library three
  std::cout << "------TESTING LIBRARY THREE------" << std::endl;
  three.StartThread();
  std::cout << "------END TESTING LIBRARY THREE------\n" << std::endl;

  return 0;
}
