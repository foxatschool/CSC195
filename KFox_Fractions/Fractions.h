#pragma once

namespace mathlib
{
	template <typename T>
	class Fractions
	{
	private:
		int numerator_m;
		int denominator_m;

	public:

		Fraction<T>() = default;

		Fractions(T numerator, T denominator) :
			if (numerator != 0 && denominator != 0) 
			{
				numerator_m = numerator;
				denominator_m = denominator;
			}

		Fraction<T> operator + (const Fraction<T>& other) { return Fraction<T> (numerator_m + other.numerator_m, denominator_m + other.denominator_m) }
		//Fraction<T> operator - (const Fraction<T>& other) { return Fraction<T> (numerator_m - other.numerator_m, denominator_m - other.denominator_m) }
		//Fraction<T> operator * (const Fraction<T>& other) { return Fraction<T> (numerator_m * other.numerator_m, denominator_m * other.denominator_m) }
		//Fraction<T> operator / (const Fraction<T>& other) { return Fraction<T> (numerator_m / other.numerator_m, denominator_m / other.denominator_m) }



		//Fraction<T> operator == (const Fraction<T>& other) { return  (this->numerator_m == other.numerator_m && this->denominator_m == other.denominator_m) }
		//Fraction<T> operator != (const Fraction<T>& other) { return !(this == other) }
		//Fraction<T> operator < (const Fraction<T>& other) { return (this->tofloat() < other.tofloat) }
		//Fraction<T> operator > (const Fraction<T>& other) { return (this->tofloat() > other.tofloat) }
		//Fraction<T> operator <= (const Fraction<T>& other) { return (this->tofloat() <= other.tofloat) }
		//Fraction<T> operator >= (const Fraction<T>& other) { return (this->tofloat() >= other.tofloat) }



		//freind std::ostream& operator << (std::ostream& ostream, const Fraction<T>& f) 
		//{
		//	ostream << p.numerator_m << "\n -- \n " << p.denominator_m << std::endl;

		//	return ostream;
		//}
		//friend std::istream& operator >> (std::istream& istream, Fraction<T>& p) 
		//{
		//	istream >> p.numerator_m;
		//	istream >> p.denominator_m;

		//	return istream;
		//}

		//Fractions<T> Simplify(numerator, denominator)
		//{
		//	// Find the greatest common divisor(GCD)
		//	gcd = findGCD(numerator, denominator);

		//	// Divide both numerator and denominator by the GCD
		//	simplifiedNumerator = numerator / gcd;
		//	simplifiedDenominator = denominator / gcd;

		//	// Handle sign(keep sign in numerator)
		//	if (denominator < 0)
		//	{
		//		simplifiedNumerator = -simplifiedNumerator;
		//		simplifiedDenominator = -simplifiedDenominator;
		//	}

		//	return Fractions(simplifiedNumerator, simplifiedDenominator);
		//}
		//findGCD(a, b) 
		//{
		//	// Euclidean algorithm to find GCD
		//	while (b != 0)
		//	{
		//		temp = b
		//			b = a % b
		//			a = temp
		//			return a
		//	}
		//			
		//}

		//double tofloat() const {
		//	return static_cast<double>(numerator_m) / static_cast<double>(denominator_m);
		//}

	};
	
}