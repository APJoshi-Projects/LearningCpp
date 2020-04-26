#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
while (true) {
int nValue;
cout << "Input a value:";
cin >> nValue;
if (nValue < 0){
cout << "Negative numbers are not allowed\n";
continue;
}
cout << nValue << endl;
return 0;
}

}


