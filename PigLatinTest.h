#pragma once
#include "d:\users\dave\documents\visual studio 2010\projects\gtest\include\gtest\gtest.h"
//#include "PigLatin.h"
#include <string>
#include <vector>

class PigLatinTest :
	public ::testing::Test
{
public:
	virtual void SetUp()
	{
		p_cout_streambuf = std::cout.rdbuf();
		dave="dave";
	}
	virtual void TearDown()
	{
		std::cout.rdbuf(p_cout_streambuf); 
	}
	std::ostringstream oss;
	std::streambuf* p_cout_streambuf;
	std::string dave;
	std::string getString(const std::vector<std::string>&);
	PigLatinTest(void);
	~PigLatinTest(void);
};

