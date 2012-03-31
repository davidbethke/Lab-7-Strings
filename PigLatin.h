#ifndef PIGLATIN_H
#define PIGLATIN_H
#include <string>
#include <iostream>
using namespace std;
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
#endif //PIGLATIN_H