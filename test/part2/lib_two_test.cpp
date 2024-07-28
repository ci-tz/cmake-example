#include "part2/lib_two.h"
#include "gtest/gtest.h"

namespace learn_cmake {

TEST(LibTwoTest, SetValue) {
  LibTwo lib_two;
  lib_two.SetValue(42);
  EXPECT_EQ(lib_two.GetValue(), 42);
}

TEST(LibTwoTest, PrintValue) {
  LibTwo lib_two(42);
  testing::internal::CaptureStdout();
  lib_two.PrintValue();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "Value: 42\n");
}

}  // namespace learn_cmake