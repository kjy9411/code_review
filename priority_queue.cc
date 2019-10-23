#include <gtest/gtest.h>
#include "priority_queue.h"

TEST(PriorityQueueTest, Trivial) {
  templatePriorityQueue<int> expTarget;

  //Test 1 - Initalize
  ASSERT_TRUE(expTarget.empty()); // empty test

  //Test 2 - Push Datas and Top size
  expTarget.push(1);
  expTarget.push(4);
  expTarget.push(2);
  expTarget.push(3);
  expTarget.push(8);
  expTarget.push(5);

  ASSERT_EQ(expTarget.size(), 6);
  ASSERT_EQ(expTarget.top(), 8);
  ASSERT_FALSE(expTarget.empty());

  //Test 3 - pop test
  for (int i = 0; i < 3; i++) {
	  expTarget.pop();
  }

  ASSERT_EQ(expTarget.top(), 3);
  ASSERT_EQ(expTarget.size(), 3);
  ASSERT_FALSE(expTarget.empty());

  for (int i = 0; i < 3; i++) {
	  expTarget.pop();
  }

  ASSERT_TRUE(expTarget.empty());
	
  /* Fail Example - If you activate this code, Test will fail.
   * expTarget.pop();
   // non-Fatal Failure - not terminate this test case when result of empty method is false.
   * EXPECT_TRUE(expTarget.empty());
   * ASSERT_EQ(expTarget.size(),0);
  */
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
