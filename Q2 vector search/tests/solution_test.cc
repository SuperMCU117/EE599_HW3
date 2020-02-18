#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Firsttest, NormalReturn) {
  Solution solution;
  std::vector<int> input{1,2,3,4,5,6};
  int num=7;
  std::vector<int> expected{0,5};
  EXPECT_EQ(expected, solution.twoSum(input,num));
}

TEST(Secondtest, NormalReturn) {
  Solution solution;
  std::vector<int> input{1,2,6,4,5,1};
  int num=7;
  std::vector<int> expected{0,2};
  EXPECT_EQ(expected, solution.twoSum(input,num));
}

TEST(Thirdtest, NOmatch) {
  Solution solution;
  std::vector<int> input{1,2,6,4,5,1};
  int num=15;
  std::vector<int> expected;
  EXPECT_EQ(expected, solution.twoSum(input,num));
} 

TEST(Forthtest, Emptyinput) {
  Solution solution;
  std::vector<int> input;
  int num=15;
  std::vector<int> expected;
  EXPECT_EQ(expected, solution.twoSum(input,num));
} 
