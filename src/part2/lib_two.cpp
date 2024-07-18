#include "part2/lib_two.h"
#include <iostream>

namespace learn_cmake {
void LibTwo::SetValue(int32_t value) { member_ = value; }

int32_t LibTwo::GetValue() const { return member_; }

void LibTwo::PrintValue() const { std::cout << "Value: " << member_ << std::endl; }
}  // namespace learn_cmake