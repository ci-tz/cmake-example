#include "part3/lib_three.h"

#include <iostream>

namespace learn_cmake {
void LibThree::StartThread() {
  thread_ = std::thread(&LibThree::ThreadFunction, this);
  thread_.join();
}

void LibThree::ThreadFunction() {
  std::cout << "ThreadFunction" << std::endl;
  one_.PrintHello();
  one_.PrintGoodbye();
}

}  // namespace learn_cmake