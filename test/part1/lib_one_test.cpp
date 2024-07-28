#include "part1/lib_one.h"
#include "gtest/gtest.h"

namespace learn_cmake {

TEST(LibOneTest, PrintHello) {
  LibOne lib_one;
  testing::internal::CaptureStdout();
  lib_one.PrintHello();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "Hello from LibOne\n");
}

TEST(LibOneTest, PrintGoodbye) {
  LibOne lib_one;
  testing::internal::CaptureStdout();
  lib_one.PrintGoodbye();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "Goodbye from LibOne\n");
}

}  // namespace learn_cmake