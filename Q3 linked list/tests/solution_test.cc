#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Firsttest, normal) {
  singlyLinkedList sin;
  sin.push_front(1);
  sin.push_front(2);
  sin.push_front(3);
  sin.push_front(4);
  int expected2 = 4;
  int actual2=sin.size();
  int expected1= 1;
  int actual1 = sin.back();
  int actual = sin.front();
  int expected = 4;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);

}

TEST(Secondtest, normal) {
  singlyLinkedList sin;
  
  sin.​push_back(1);
  sin.​push_back(2);
  bool actual2= sin.empty();
  bool expected2 = false;
  sin.pop_back();
  sin.pop_front();
  bool actual1 = sin.empty();
  bool expected1 = true;
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

TEST(Thirdtest,normal){
  singlyLinkedList sin;
  sin.​push_back(1);
  sin.​push_back(2);
  sin.erase(sin.head);
  int actual1 = sin.back();
  sin.insert_after(sin.head,5);
  int actual2 = sin.back();
  int expected1=2;
  int expected2=5;
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected1, actual1);

}


  



