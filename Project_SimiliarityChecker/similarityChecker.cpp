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

	int getScorefromlength()
	{
		int sizeofstr1 = getStrSize(minputstr1);
		int sizeofstr2 = getStrSize(minputstr2);

		int GAP = getGAPfromStrSize(sizeofstr1, sizeofstr2);
		int shortersize = getshortergerSize(sizeofstr1, sizeofstr2);

		double score = (double)((double)1 - ((double)GAP / (double)shortersize)) * 60;

		return (int)score;
	}

	void drawMaptogettotalCnt(int(& totalmap)[26])
	{
		for(char ch : minputstr1)
		{
			totalmap[ch-'A']++;
		}
		for (char ch : minputstr2)
		{
			totalmap[ch - 'A']++;
		}
	}

	int getTotalCntinstrs()
	{
		int CountCharMap[26] ={};
		drawMaptogettotalCnt(CountCharMap);

		int totalcnt = getTotalCntofStrs(CountCharMap);

		return totalcnt;
	}

private:
	int getStrSize(string inputStr)
	{
		return inputStr.size();
	}
	int getGAPfromStrSize(int sizestr1, int sizestr2)
	{
		return sizestr1 >= sizestr2 ?
			sizestr1 - sizestr2 :
			sizestr2 - sizestr1;
	}
	int getshortergerSize(int sizeofstr1, int sizeofstr2)
	{
		return sizeofstr1 >= sizeofstr2 ? sizeofstr2 : sizeofstr1;
	}
	int getTotalCntofStrs(int totalmap[26])
	{
		int totalcnt = 0;
		for (int i = 0; i < 26; i++)
		{
			if (totalmap[i]) totalcnt++;
		}
		return totalcnt;
	}
	string minputstr1, minputstr2;
};