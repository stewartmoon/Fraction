#include <iostream>
#include <iomanip>

using namespace std;

class Fraction
{
public:

	//Declare constructors
	Fraction::Fraction();
	Fraction::Fraction(int numvalue);
	Fraction::Fraction(int numvalue, int denvalue);

	//Declare member functions
	Fraction Add(Fraction frac);
	Fraction Subtract(Fraction frac);
	Fraction Multiplication(Fraction frac);
	Fraction Divide(Fraction frac);
	
	//void Mod();
	void input();
	void output();
	void Simplify();

	bool Fraction::lessThan(Fraction frac);
	bool Fraction::greaterThan(Fraction frac);
	bool Fraction::equal(Fraction frac);
	
private:
	int num;
	int den;
};

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
}

//Constructors
Fraction::Fraction():num(0),den(1)
{

}

Fraction::Fraction(int numvalue)
{
	numvalue = num;
}

Fraction::Fraction(int numvalue,int denvalue)
{
	numvalue=num;
	denvalue=den;
}

void Fraction::input()
{
	cout << "Please enter the numerater: ";
	cin >> num;

	cout << "Please enter the denominator: ";
	cin >> den;
	cout << endl;
}

void Fraction::output()
{
	cout << num<<"/"<<den;
}

void Fraction::Simplify()
{
	for (int x = num; x > 1; x--)
	{
		if (num%x == 0 && den%x == 0)
		{
			num /= x;
			den /= x;
			break;
		}
	}
}

Fraction Fraction::Multiplication(Fraction frac)
{
	Fraction result;
	result.num = num*frac.num;
	result.den = den*frac.den;
	
return result;
}

Fraction Fraction::Add(Fraction frac)
{
	Fraction result;

	result.num = num*frac.den + frac.num*den;
	result.den = den*frac.den;

return result;
}

Fraction Fraction::Subtract(Fraction frac)
{
	Fraction result;

	result.num = num*frac.den - frac.num*den;
	result.den = den*frac.den;

return result;
}

Fraction Fraction::Divide(Fraction frac)
{
	Fraction result;
	result.num = num*frac.den;
	result.den = den*frac.num;

	return result;
}


bool Fraction::lessThan(Fraction frac)
{
	return num*frac.den <= den*frac.num;
}

bool Fraction::greaterThan(Fraction frac)
{
	return num*frac.den >= den*frac.num;
}

bool Fraction::equal(Fraction frac)
{
	return num*frac.den == den*frac.num;
}