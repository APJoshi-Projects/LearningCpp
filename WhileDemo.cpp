#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main (int nNumbreofArgs, char* pszArgs[])
{
	int nLoopCount;
	cout << "Enter loop count: ";
	cin >> nLoopCount;
	
	while (nLoopCount > 0)
	{
		nLoopCount = nLoopCount - 1;
		cout << "Only " << nLoopCount 
		     << " loops to go" << endl;
	}
	
	cin.ignore();
	cin.get();
	nLoopCount=1000;
	while (nLoopCount-- > 0)
	{
		nLoopCount = nLoopCount - 1;
		cout << "Only " << nLoopCount 
		     << " loops to go" << endl;
	}
	
	cout << "Press Enter to continue..." << endl;
	return 0;
}
