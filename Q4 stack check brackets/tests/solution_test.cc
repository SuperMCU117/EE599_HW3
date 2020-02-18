#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FirstTest, Normal) {
  Solution solution;
  std::string input="(a+b)[c*d]";
  bool expected = true;
  EXPECT_EQ(expected, solution.checkValid(input));
}

TEST(SecondTest, Normal) {
  Solution solution;
  std::string input="(a+b}";
  bool expected = false;
  EXPECT_EQ(expected, solution.checkValid(input));
}
TEST(ThirdTest, Normal) {
  Solution solution;
  std::string input="(7h+[5c)+7]";
  bool expected = false;
  EXPECT_EQ(expected, solution.checkValid(input));
}


TEST(ForthTest, empty) {
  Solution solution;
  std::string input="";
  bool expected = true;
  EXPECT_EQ(expected, solution.checkValid(input));
}