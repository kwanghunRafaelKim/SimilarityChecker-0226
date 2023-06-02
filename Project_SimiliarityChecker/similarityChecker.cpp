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

	int getGAPfromStrSize(void)
	{
		int GAP = getStrSize(minputstr1) - getStrSize(minputstr2) > 0 ?
			      getStrSize(minputstr1) - getStrSize(minputstr2) :
		          getStrSize(minputstr2) - getStrSize(minputstr1);
		return GAP;
	}

private:
	string minputstr1, minputstr2;
};