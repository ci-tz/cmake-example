#include "part3/lib_three.h"
#include "gtest/gtest.h"

namespace learn_cmake {

TEST(LibThreeTest, PrintTest) {
  LibThree lib_three;
  testing::internal::CaptureStdout();
  lib_three.StartThread();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "ThreadFunction\nHello from LibOne\nGoodbye from LibOne\n");
}

}  // namespace learn_cmake