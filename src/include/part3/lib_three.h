#pragma once

#include <cstdint>
#include <thread>
#include "part1/lib_one.h"
#include "part2/lib_two.h"

namespace learn_cmake {

class LibThree {
 public:
  void StartThread();

 private:
  void ThreadFunction();
  LibOne one_;
  std::thread thread_;
};

}  // namespace learn_cmake