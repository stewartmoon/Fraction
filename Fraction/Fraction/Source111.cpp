#include <iostream>
#include <iomanip>

using namespace std;

class Fraction
{
public:
	void input();

	Fraction Add(Fraction frac);
	Fraction Subtract(Fraction frac);
	Fraction Multiplication(Fraction frac);
	void Division();
	void Mod();
	void Simplify();

	void output();

private:
	int num;
	int den;
};

int main()
{
	Fraction frac1;
	Fraction frac2;

	frac1.input();
	frac2.input();

	cout << "Fraction1: ";
	frac1.output();
	cout << endl;
	cout << "Fraction2: ";
	frac2.output();
	cout << endl;


	frac1.Simplify();
	cout << endl;
	frac2.Simplify();
	cout << "Fraction 1 Simplified: ";
	frac1.output();
	cout << endl;
	cout << "Fraction 2 Simplified: ";
	frac2.output();
	cout << endl;

	Fraction multiplicationanswer = frac1.Multiplication(frac2);
	frac1.output();
	cout << "*";
	frac2.output();
	cout << " = ";
	multiplicationanswer.output();
	cout << endl;

	Fraction additionanswer = frac1.Add(frac2);
	frac1.output();
	cout << "+";
	frac2.output();
	cout << " = ";
	additionanswer.output();
	cout << endl;

	Fraction subtractionanswer = frac1.Subtract(frac2);
	frac1.output();
	cout << "-";
	frac2.output();
	cout << " = ";
	subtractionanswer.output();
	cout << endl;
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