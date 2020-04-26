#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
int nLoopCount;
cout << "Enter loop count: ";
cin >> nLoopCount;
do {
	--nLoopCount;
	cout << "Only " << nLoopCount << " loops to go" << endl;
}
while (nLoopCount > 0);
cin.get();
return 0;
}
