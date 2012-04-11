// PigLatin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <sstream>
#ifdef NDEBUG
#include "PigLatin.h"
#endif //NDEBUG
#ifdef _DEBUG
#include "gtest\gtest.h"
#endif //_DEBUG
using namespace std;
/*
bool isVowel(char c)
{
	return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
bool isPunc(char c)
{
	return (c=='?'||c=='.'||c==','||c==':'||c=='!');
}
void printPig( string & s)
{
	string::iterator itLast=s.end()-1; // last char
	string::iterator itEss=s.begin();  // current char
	bool hasPunc=false;
	bool found=false;
	if(isPunc(*itLast))
	{
		itLast--; // last char, no longer a punctuation mark
		hasPunc=true;
	}
	
	//for(;itEss != s.end()-1;itEss++)
	for(;itEss != itLast+1;itEss++) // iterator not passed last character
		if(isVowel(*itEss)&& !found)
		{
			found=true;
			cout <<s.substr(itEss-s.begin(),itLast-itEss+1)<<"-"<<s.substr(0,itEss-s.begin())<<"ay";
		}
		
	if(hasPunc)
		cout <<*(s.end()-1); // fill in last punc char
}
*/
#ifdef _DEBUG

TEST(sample_test_case, sample_test)
{
	EXPECT_EQ(1, 1);
}
#endif //_DEBUG
int _tmain(int argc, _TCHAR* argv[])
{
#ifdef _DEBUG

	 testing::InitGoogleTest(&argc, argv); 
	RUN_ALL_TESTS(); 
	std::getchar();
#endif //_DEBUG
#ifdef NDEBUG
	/* small test
	string dave="dave";
	string dave2="dave,";
	string every="every";
	printPig(dave);
	cout<<endl;
	printPig(dave2);
	cout<<endl;
	printPig(every);
	getchar();
	*/
	string sentence;
	stringstream ss;
	string word;
	cout << "Enter a sentence to convert to Pig Latin:"<<endl;
	
	//while(getline(cin,sentence)&& sentence !="quit")  //TODO requires ends on space
	while(cin >> word && word !="quit")
	{								// TODO determine sentence ending punctuation . ! ?
		//ss.str(sentence);
		//ss>>word;
		printPig(word);
		cout << " ";
		ss<<word<< " ";
	}
	cout <<endl;
	cout << "You entered:"<<endl;
	cout << ss.str();
	getchar();
	getchar();
#endif //NDEBUG

	return 0;
}

