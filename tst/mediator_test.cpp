#include "mediator.hpp"
#include <gtest/gtest.h>

//TODO

TEST(DummyTest, Dummy1) {
   EXPECT_FALSE(0);
}


int main(int argc , char ** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
