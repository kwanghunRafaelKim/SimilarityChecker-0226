#include "pch.h"
#include "../Project_SimiliarityChecker/similarityChecker.cpp"

TEST(SimilarityChecker, CheckStrSize) {
  SimiliarityChecker sm_checker{};
  string inputStr = "ABC";
  EXPECT_EQ(3, sm_checker.getStrSize(inputStr));  
}