#include "pch.h"
#include "../Project_SimiliarityChecker/similarityChecker.cpp"

TEST(SimilarityChecker, CheckStrSize) {
  SimiliarityChecker sm_checker{ "ABC" ,"CDEF"};
  string inputStr = "ABC";
  EXPECT_EQ(3, sm_checker.getStrSize(inputStr));  
}

TEST(SimilarityChecker, getGAPfromStrSizeDiff1) {
	SimiliarityChecker sm_checker{ "ABC" ,"CDEF" };
	EXPECT_EQ(1, sm_checker.getGAPfromStrSize());
}
TEST(SimilarityChecker, getGAPfromStrSizeDiff2) {
	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEF" };
	EXPECT_EQ(2, sm_checker.getGAPfromStrSize());
}
TEST(SimilarityChecker, getGAPfromStrSizeDiff0) {
	SimiliarityChecker sm_checker{ "ABCD" ,"CDEF" };
	EXPECT_EQ(0, sm_checker.getGAPfromStrSize());
}