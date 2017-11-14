#include <iostream>
#include <iomanip>

using namespace std;

namespace Moon
{
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
}