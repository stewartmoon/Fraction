#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Fraction
{
public:

	//Declare constructors
	Fraction::Fraction();
	Fraction::Fraction(int numvalue);
	Fraction::Fraction(int numvalue, int denvalue);

	//Declare member functions
	bool Fraction::operator <(Fraction frac);
	bool Fraction::operator >(Fraction frac);
	bool Fraction::operator ==(Fraction frac);
	
	Fraction Fraction::operator +(Fraction frac);
	Fraction Fraction::operator -(Fraction frac);
	Fraction Fraction::operator *(Fraction frac);
	Fraction Fraction::operator /(Fraction frac);
	friend ostream& operator << (ostream & outputStream, Fraction& frac);
	friend istream& operator >> (istream& inputStream, Fraction& frac);

	//Declare local functions
	//void input();
	//void output();
	void Simplify();

private:
	int num;
	int den;
};

int main()
{
	//Declare Fraction classes variables frac1,frac2
	Fraction frac1;
	Fraction frac2;
	cin >> frac1;
	cout << frac1;

	/*//Gather input from user
	cin >>frac1;
	cin >>frac2;

	//Display output in better format
	cout << "Fraction1: " << frac1 << endl;
	cout << "Fraction2: " << frac2 << endl;


	//Simplify fractions and display output
	frac1.Simplify();
	cout << endl;
	frac2.Simplify();
	cout << "Fraction 1 Simplified: ";
	cout << frac1;
	cout << endl;
	cout << "Fraction 2 Simplified: ";
	cout << frac2;
	cout << endl;

	//Multiply fractions and display output
	Fraction multiplicationanswer = frac1*(frac2);
	cout << frac1 << " * " << frac2 << " = " << (frac1 + frac2) << endl;

	//Add fractions and display output
	Fraction additionanswer = frac1+(frac2);
	cout << frac1 << " + " << frac2 << " = " << (frac1 + frac2) << endl;

	//Subrtact fractions and display output
	Fraction subtractionanswer = frac1-(frac2);
	cout << frac1 << " - " << frac2 << " = " << (frac1 + frac2) << endl;
	
	//Divid fractions and display output
	Fraction divideanswer = frac1/(frac2);
	cout << frac1 << " / " << frac2 << " = " << (frac1 + frac2) << endl;*/
}

//Constructors
Fraction::Fraction() :num(0), den(1)
{

}

Fraction::Fraction(int numvalue)
{
	numvalue = num;
}

Fraction::Fraction(int numvalue, int denvalue)
{
	numvalue = num;
	denvalue = den;
}

/*void Fraction::input()
{
	cout << "Please enter the numerater: ";
	cin >> num;

	cout << "Please enter the denominator: ";
	cin >> den;
	cout << endl;
}*/

/*void Fraction::output()
{
	cout << num << "/" << den;
}*/

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

bool Fraction::operator <(Fraction frac)
{
	return num*frac.den <= den*frac.num;
}

bool Fraction::operator >(Fraction frac)
{
	return num*frac.den >= den*frac.num;
}

bool Fraction::operator ==(Fraction frac)
{
	return num*frac.den == den*frac.num;
}

Fraction Fraction::operator *(Fraction frac)
{
	Fraction result;
	result.num = num*frac.num;
	result.den = den*frac.den;

return result;
}

Fraction Fraction::operator +(Fraction frac)
{
	Fraction result;

	result.num = num*frac.den + frac.num*den;
	result.den = den*frac.den;

	return result;
}

Fraction Fraction::operator -(Fraction frac)
{
	Fraction result;

	result.num = num*frac.den - frac.num*den;
	result.den = den*frac.den;

	return result;
}

Fraction Fraction::operator /(Fraction frac)
{
	Fraction result;
	result.num = num*frac.den;
	result.den = den*frac.num;

	return result;
}

ostream& operator << (ostream & outputStream,Fraction& frac)
{
	outputStream << frac.num << "/" << frac.den;
	
	return outputStream;
}

istream& operator >> (istream& inputStream, Fraction& frac)
{
	cout << "Please enter the numerater: ";
	inputStream >> frac.num;

	cout << "Please enter the denominator: ";
	inputStream >> frac.den;

	return inputStream;
}