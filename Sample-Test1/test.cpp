#include "pch.h"
#include "../Project_SimiliarityChecker/similarityChecker.cpp"

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

TEST(SimilarityChecker, getScorefromalpha_40) {
	SimiliarityChecker sm_checker{ "AAB" ,"AB" };
	EXPECT_EQ(40, sm_checker.getScorefromalpha());
}
TEST(SimilarityChecker, getScorefromalpha_20) {
	SimiliarityChecker sm_checker{ "A" ,"AB" };
	EXPECT_EQ(20, sm_checker.getScorefromalpha());
}

TEST(SimilarityChecker, gettotalScore_100) {
	SimiliarityChecker sm_checker{ "BA" ,"AB" };
	EXPECT_EQ(100, sm_checker.gettotalScore());
}

//TEST(SimilarityChecker, CheckStrSize) {
//  SimiliarityChecker sm_checker{ "ABC" ,"CDEF"};
//  string inputStr = "ABC";
//  EXPECT_EQ(3, sm_checker.getStrSize(inputStr));  
//}

//TEST(SimilarityChecker, getGAPfromStrSizeDiff_1) {
//	SimiliarityChecker sm_checker{ "ABC" ,"CDEF" };
//	EXPECT_EQ(1, sm_checker.getGAPfromStrSize(3,4));
//}
//TEST(SimilarityChecker, getGAPfromStrSizeDiff_2) {
//	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEF" };
//	EXPECT_EQ(2, sm_checker.getGAPfromStrSize(6,4));
//}
//TEST(SimilarityChecker, getGAPfromStrSizeDiff_0) {
//	SimiliarityChecker sm_checker{ "ABCD" ,"CDEF" };
//	EXPECT_EQ(0, sm_checker.getGAPfromStrSize(4,4));
//}

//TEST(SimilarityChecker, getTotalCntinstrs_6) {
//	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEF" };
//	EXPECT_EQ(6, sm_checker.getTotalCntinstrs());
//}
//TEST(SimilarityChecker, getTotalCntinstrs_8) {
//	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEFHZ" };
//	EXPECT_EQ(8, sm_checker.getTotalCntinstrs());
//}
//
//TEST(SimilarityChecker, getSameCntinstrs_4) {
//	SimiliarityChecker sm_checker{ "ABCDEF" ,"CDEF" };
//	EXPECT_EQ(4, sm_checker.getSameCntinstrs());
//}
//TEST(SimilarityChecker, getSameCntinstrs_4_2) {
//	SimiliarityChecker sm_checker{ "AABBCCDDEEFF" ,"CDEF" };
//	EXPECT_EQ(4, sm_checker.getSameCntinstrs());
//}
//TEST(SimilarityChecker, getSameCntinstrs_6) {
//	SimiliarityChecker sm_checker{ "AZCEFCJUNGYY" ,"JAYCEFK" };
//	EXPECT_EQ(6, sm_checker.getSameCntinstrs());
//}
