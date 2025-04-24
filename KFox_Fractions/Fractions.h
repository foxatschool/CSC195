#pragma once

namespace mathlib
{
	template<typename T>
	class Fractions
	{
	private:
		int numerator_m;
		int denominator_m;

	public:

		Fractions() = default;

		Fractions(T numerator, T denominator)
		{
			if (numerator != 0 && denominator != 0)
			{
				numerator_m = numerator;
				denominator_m = denominator;
			}
		}
			

		Fractions operator + (const Fractions& other) { return Fractions(numerator_m + other.numerator_m, denominator_m + other.denominator_m); }
		Fractions operator - (const Fractions& other) { return Fractions(numerator_m - other.numerator_m, denominator_m - other.denominator_m); }
		Fractions operator * (const Fractions& other) { return Fractions(numerator_m * other.numerator_m, denominator_m * other.denominator_m); }
		Fractions operator / (const Fractions& other) { return Fractions(numerator_m / other.numerator_m, denominator_m / other.denominator_m); }



		bool operator == (const Fractions& other) { return  (this->numerator_m == other.numerator_m && this->denominator_m == other.denominator_m); }
		bool operator != (const Fractions& other) { return !(this == other); }
		bool operator < (const Fractions& other) { return (this->tofloat() < other.tofloat); }
		bool operator > (const Fractions& other) { return (this->tofloat() > other.tofloat); }
		bool operator <= (const Fractions& other) { return (this->tofloat() <= other.tofloat); }
		bool operator >= (const Fractions& other) { return (this->tofloat() >= other.tofloat); }



		friend std::ostream& operator << (std::ostream& ostream, const Fractions<T>& f) 
		{
			ostream << f.numerator_m << "\n -- \n " << f.denominator_m << std::endl;

			return ostream;
		}

		friend std::istream& operator >> (std::istream& istream, Fractions<T>& p) 
		{
			istream >> p.numerator_m;
			istream >> p.denominator_m;

			return istream;
		}

		Fractions Simplify()
		{
		// Find the greatest common divisor(GCD)
			T gcd = findGCD(numerator_m, denominator_m);

			// Divide both numerator and denominator by the GCD
			T simplifiedNumerator = numerator_m / gcd;
			T simplifiedDenominator = denominator_m / gcd;

		//	// Handle sign(keep sign in numerator)
			if (denominator < 0)
			{
				simplifiedNumerator = simplifiedNumerator * -1;
				simplifiedDenominator = simplifiedDenominator * -1;
			}

			return Fractions(simplifiedNumerator, simplifiedDenominator);
			//return numerator_m % denominator_m;
		}

		findGCD(T a, T b) 
		{
			// Euclidean algorithm to find GCD
			while (b != 0)
			{
				T temp = b;
				b = a % b;
				a = temp;
				return a;
			}
		//			
		}

		float tofloat() const 
		{
			return static_cast<float>(numerator_m) / static_cast<float>(denominator_m);
			//return numerator_m / (float)denominator_m;
		}

	};
	
}