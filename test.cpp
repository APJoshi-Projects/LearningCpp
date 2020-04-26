#include <iostream>
using namespace std;
int main()
{
	int nArg1= 1;
	int nArg2= 2;
	int nArg3= 3;
	bool b = (nArg1 > nArg2) && (nArg2++ > nArg3);
	cout << b  << endl;
	return 0;
}
