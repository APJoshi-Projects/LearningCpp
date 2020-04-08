/* Who.
   Copyright 2020 Ankur Joshi <ankurjoshi@outlook.com>
  
 * What.
   BranchDemo.cpp (if statement example) 
 
 * Why.
   Learning C++ 
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int nNumbreofArgs, char* pszArgs[])
{
	int nArg1;
	cout << "Enter arg1: ";
	cin >> nArg1;
	
	int nArg2;
	cout << "Enter arg2: ";
	cin >> nArg2;
	
	if (nArg1 > nArg2)
	{
		cout << "Argument 1 is greater than argument 2" << endl;
	}
	else
	{
		cout << "Argument 1 is not greater than argument 2" << endl;
	}
	return 0;
}
