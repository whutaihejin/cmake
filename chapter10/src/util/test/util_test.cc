#include "gtest/gtest.h"
#include "util/util.h"

TEST (MaxTest, PositiveZero) {
  EXPECT_EQ (2, max(1, 2));
  EXPECT_EQ (200, max(1, 200));
  EXPECT_EQ (2000, max(1, 2000));
  EXPECT_EQ (2, max(2, 1));
  EXPECT_EQ (200, max(200, 1));
  EXPECT_EQ (2000, max(2000, 1));
  EXPECT_EQ (0, max(0, 0));
  EXPECT_EQ (5, max(5, 0));
  EXPECT_EQ (5, max(0, 5));
}

TEST (MaxTest, Negative) {
  EXPECT_EQ (0, max(-1, 0));
  EXPECT_EQ (0, max(0, -1));
  EXPECT_EQ (-1, max(-5, -1));
  EXPECT_EQ (-1, max(-1, -5));
  EXPECT_EQ (-100, max(-100, -1000));
  EXPECT_EQ (-100, max(-1000, -100));
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
