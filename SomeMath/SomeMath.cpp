// This program performs some basic mathematical operations,
// demonstrating some features of C++.

#include <iostream>  // Must include to use cout
using namespace std; // So you don't have to put "std::" before everything (cout)

int main()
{
	// Declare some variables of type int
	int x = 5;
	int y = 6;
	
	// Perform some math and output
	// an integer and an integer gives you an integer
	cout << x << " + " << y << " = " << x + y << "\n";
	cout << x << " - " << y << " = " << x - y << "\n";
	cout << x << " * " << y << " = " << x * y << "\n";
	cout << x << " / " << y << " = " << x / y << "\n";
	
	// Now do floating-point arithmetic to get the right answer for division
	
	float z = float(x) / y;
	cout << x << " / " << y << " = " << z << "\n";
	
	return 0;
}
