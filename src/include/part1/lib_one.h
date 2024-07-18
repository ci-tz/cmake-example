#pragma once

namespace learn_cmake {

class LibOne {
 public:
  LibOne() = default;
  virtual ~LibOne() = default;

  void PrintHello();
  void PrintGoodbye();
};

}  // namespace learn_cmake