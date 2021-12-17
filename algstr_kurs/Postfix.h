#pragma once
#include <string>
#include "Stack.h"

using namespace std;

class PostfixClass
{
public:
	string outstring();
	string infix;
	string postfix;

	PostfixClass();
	~PostfixClass();

	void inputstring();
	void ConvertToPostfix();
	double Calculate();
	int GetPriority(string s);
private:
	Stack stack;
};
