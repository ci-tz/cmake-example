#pragma once

#include <cstdint>

namespace learn_cmake {
class LibTwo {
 public:
  LibTwo() = default;
  explicit LibTwo(int32_t member) : member_(member) {}
  virtual ~LibTwo() = default;

  void SetValue(int32_t);
  int32_t GetValue() const;
  void PrintValue() const;

 private:
  int32_t member_ = 0;
};
}  // namespace learn_cmake