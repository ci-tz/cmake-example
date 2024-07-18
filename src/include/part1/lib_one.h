#pragma once

namespace learn_cmake {

class LibOne {
 public:
  LibOne();
  virtual ~LibOne();

  void PrintHello();
  void PrintGoodbye();
};

}  // namespace learn_cmake