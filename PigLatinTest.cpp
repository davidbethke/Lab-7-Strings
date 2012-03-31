#include "PigLatinTest.h"
#include "PigLatin.h"
std::string getString(const vector<std::string>& myStrings)
{
	string mystring;
	return mystring;
}
PigLatinTest::PigLatinTest(void)
{
}


PigLatinTest::~PigLatinTest(void)
{
}
TEST_F(PigLatinTest, pigTest1)
{
	std::cout.rdbuf(oss.rdbuf());
	printPig(dave);
	EXPECT_EQ("ave-day",oss.str())<<"FAIL: dave";
	oss.clear();
}

