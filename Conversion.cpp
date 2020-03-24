/* Who.
 * Copyright 2020 Ankur Joshi <ankurjoshi@outlook.com>
 * 
 * What.
 * Conversion.cpp (convert temperature from celcius degrees to fahrenhite) 
 * 
 * Why.
 * Learning C++ 
 */
 
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumbeofArgc, char* pazArgv[])
{
	int celcius;
	cout << "Enter the temperature in celcius:";
	cin >> celcius;
	
	int factor;
	fctor = 212 - 32;
	
	int fahrenheit;
	farnheit = factor * celcius/100 +32;
	
	cout << "Fahrenheit value is:";
	cout << "fahrenheit" << endl;
	
	cout << "Press Enter to continue..." <<endl;
	cin.ignre(10,'\n');
	cin.get();
	return 0;
}

