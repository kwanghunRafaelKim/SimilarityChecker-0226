#include "pch.h"
#include "../Project_SimiliarityChecker/similarityChecker.cpp"

TEST(SimilarityChecker, CheckStrSize) {
  SimiliarityChecker sm_checker{ "ABC" ,"CDEF"};
  string inputStr = "ABC";
  EXPECT_EQ(3, sm_checker.getStrSize(inputStr));  
}

TEST(SimilarityChecker, getGAPfromStrSizeDiff_1) {
	SimiliarityChecker sm_checker{ "ABC" ,"CDEF" };
	EXPECT_EQ(1, sm_checker.getGAPfromStrSize(3,4));
}
TEST(SimilarityChecker, getGAPfromStrSizeDiff_2) {
	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEF" };
	EXPECT_EQ(2, sm_checker.getGAPfromStrSize(6,4));
}
TEST(SimilarityChecker, getGAPfromStrSizeDiff_0) {
	SimiliarityChecker sm_checker{ "ABCD" ,"CDEF" };
	EXPECT_EQ(0, sm_checker.getGAPfromStrSize(4,4));
}

TEST(SimilarityChecker, getScorefromlength_60) {
	SimiliarityChecker sm_checker{ "ABC" ,"DEF" };
	EXPECT_EQ(60, sm_checker.getScorefromlength());
}
TEST(SimilarityChecker, getScorefromlength_40) {
	SimiliarityChecker sm_checker{ "ABC" ,"CDEF" };
	EXPECT_EQ(40, sm_checker.getScorefromlength());
}
TEST(SimilarityChecker, getScorefromlength_30) {
	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEF" };
	EXPECT_EQ(30, sm_checker.getScorefromlength());
}