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
	float celcius;
	cout << "Enter the temperature in celcius:";
	cin >> celcius;
	
	float factor;
	factor = 212 - 32;
	
	float fahrenheit;
	fahrenheit = factor * celcius/100 + 32;
	
	cout << "Fahrenheit value is:";
	cout << fahrenheit << endl;
	
	cout << "Press Enter to continue..." <<endl;
	cin.ignore(10,'\n');
	cin.get();
	return 0;
}
