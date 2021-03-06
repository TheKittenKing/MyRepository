// FizzBuzz.cpp : FizzBuzz is a problem in which the program must print 1 to 100 with the exceptions that if the number is divisible by 3 it should print 'Foo', 5 it should print 'Bar', if both then 'FooBar'
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string output = "";

	for (int i = 1; i <= 100; i++) {
		output = "";
		if (i % 3 == 0)
			output = "Foo";
		if (i % 5 == 0)
			output += "Bar"; // += since it could be 'FooBar' if divisible by both 3 and 5 (if divisible by 15)
		if (output == "")
			output = to_string(i);
		cout << output << endl;
	}

	getchar();

	return 0;
}