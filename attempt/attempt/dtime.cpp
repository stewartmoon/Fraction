#include <iostream>
#include <iomanip>
#include "dtime.h"

using namespace std;

namespace Moon
{
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
		cout << num << "/" << den;
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
}
