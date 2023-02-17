#include "src/eggs.h"

#include "gtest/gtest.h"

TEST(Eggs, Basic) {
  eggsample::Eggs e;
  EXPECT_EQ(e.Message(), "HelloEggs");
}
