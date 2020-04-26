#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
cout << "The primes less than 20 are: \n";
for (int i : {1, 2, 3, 5, 9, 7, 11, 13, 17, 19})
	{
	cout << i << ", ";
	}
cout << endl;
return 0;
}
