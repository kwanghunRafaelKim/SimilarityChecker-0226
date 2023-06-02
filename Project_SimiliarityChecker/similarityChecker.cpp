#include <iostream>

using namespace std;

class SimiliarityChecker
{
public:
	SimiliarityChecker(const string& minputstr1, const string& minputstr2)
		: minputstr1(minputstr1),
		  minputstr2(minputstr2)
	{
	}

	int getStrSize(string inputStr)
	{
		return inputStr.size();
	}

	int getGAPfromStrSize(int sizestr1, int sizestr2)
	{
		return sizestr1 - sizestr2 >= 0 ?
			sizestr1 - sizestr2 :
			sizestr2 - sizestr1;
	}

	int getScorefromlength()
	{
		int sizeofstr1 = getStrSize(minputstr1);
		int sizeofstr2 = getStrSize(minputstr2);

		int GAP = getGAPfromStrSize(sizeofstr1, sizeofstr2);
		int longersize = sizeofstr1 - sizeofstr2 >= 0 ? sizeofstr1 : sizeofstr2;

		double score = (double)((double)1 - ((double)GAP / (double)longersize)) * 60;

		return (int)score;
	}

private:
	string minputstr1, minputstr2;
};