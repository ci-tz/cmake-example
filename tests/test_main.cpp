#include "MyLibrary.hpp"
#include "gtest/gtest.h"

TEST(MyLibraryTest, MyLibraryFunctionTest) {
  // 调用你想要测试的函数
  MyLibraryFunction();
  EXPECT_EQ(1, 1);
  // 在这里添加断言来检查函数的行为
  // 例如，如果你期望 MyLibraryFunction() 返回 true，你可以这样写：
  // ASSERT_TRUE(MyLibraryFunction());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}