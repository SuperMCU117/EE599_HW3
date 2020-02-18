#include "src/lib/solution.h"

#include "gtest/gtest.h"
#include <vector>

TEST(Firsttest, upperbound) {
  AcademicRecord p1(100, 12,24);
  ++p1;
  
  int actual = p1.getMath();
  int expected = 100;
  EXPECT_EQ(expected, actual);
}
TEST(Secondtest, lowerbound) {
  AcademicRecord p1(0, 12,24);
  --p1;
  
  int actual = p1.getMath();
  int expected = 0;
  EXPECT_EQ(expected, actual);

}

TEST(Thirdtest, testoperator) {
  AcademicRecord p1(5,10,95);
  
  p1+=10;
  int actual3 = p1.getMath();
  p1-=5;
  int actual4 = p1.getMath();
  
  int expected3 = 15;
  int expected4 = 10;
  
  EXPECT_EQ(expected3, actual3);
  EXPECT_EQ(expected4, actual4);
}

TEST(Forthtest, copyconstuctor) {
  AcademicRecord p1(100, 12,24);
  AcademicRecord p2=p1;
  int actual1 = p2.getMath();
  int expected1 = 100;
  int actual2 = p2.getComputer();
  int actual3 = p2.getPhysics();
  int expected2 = 12;
  int expected3 = 24;
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}
