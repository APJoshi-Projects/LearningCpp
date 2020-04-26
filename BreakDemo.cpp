#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
int accumulator=0;
cout << "This program sums values from the user\n"
<< "Terminate by entering a negative number"
<< endl;
for(;;) {
int nValue =0;
cout << "Enter next number: ";
cin >> nValue;
if (nValue < 0) {
break;
}
accumulator += nValue;
}
cout << "\n The total is "<< accumulator << endl;
return 0;
}

