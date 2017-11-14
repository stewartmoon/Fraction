#include <iostream>
#include <iomanip>
#include "dtime.h"

using namespace std;

using namespace Moon;

	int main()
	{
		//Declare Fraction classes variables frac1,frac2
		Fraction frac1;
		Fraction frac2;

		//Gather input from user
		frac1.input();
		frac2.input();

		//Display output in better format
		cout << "Fraction1: ";
		frac1.output();
		cout << endl;
		cout << "Fraction2: ";
		frac2.output();
		cout << endl;

		//Simplify fractions and display output
		frac1.Simplify();
		cout << endl;
		frac2.Simplify();
		cout << "Fraction 1 Simplified: ";
		frac1.output();
		cout << endl;
		cout << "Fraction 2 Simplified: ";
		frac2.output();
		cout << endl;

		//Multiply fractions and display output
		Fraction multiplicationanswer = frac1.Multiplication(frac2);
		frac1.output();
		cout << "*";
		frac2.output();
		cout << " = ";
		multiplicationanswer.output();
		cout << endl;

		//Add fractions and display output
		Fraction additionanswer = frac1.Add(frac2);
		frac1.output();
		cout << "+";
		frac2.output();
		cout << " = ";
		additionanswer.output();
		cout << endl;

		//Subrtact fractions and display output
		Fraction subtractionanswer = frac1.Subtract(frac2);
		frac1.output();
		cout << "-";
		frac2.output();
		cout << " = ";
		subtractionanswer.output();
		cout << endl;

		//Divid fractions and display output
		Fraction divideanswer = frac1.Divide(frac2);
		frac1.output();
		cout << "/";
		frac2.output();
		cout << " = ";
		divideanswer.output();
		cout << endl;
	return 0;
	
}