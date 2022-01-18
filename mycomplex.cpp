#include <iostream>
#include <cmath>
#include "mycomplex.h"
using namespace std;
Complex :: Complex(double aRe, double aIm)
{
    Re = aRe;
    Im = aIm;
}

Complex :: Complex(const Complex & aRval)
{
    Re = aRval.Re;
    Im = aRval.Im;
}
Complex :: ~Complex()
{
    Re =0.0;
    Im = 0.0;
}

void Complex :: Set(double aRe, double aIm)
	@@ -41,7 +41,7 @@ Complex Complex :: operator + (const Complex & aRval)
{
    Complex Result;
    Result.Re = Re + aRval. Re;
    Result.Im = Im + aRval.Im;

    return Result;
}
	@@ -54,10 +54,10 @@ Complex Complex :: operator - (const Complex & aRval)
    return Result;
}

Complex Complex :: operator + (const double & aRval)
{
    Complex result;
    result.Re = Re + aRval;
    result.Im = Im;
    return result;
}
	@@ -78,10 +78,10 @@ Complex Complex  :: operator * (const Complex  & aRval){

Complex Complex :: operator * (const double & aRval)
{
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}

Complex Complex :: operator /(const double & aRval)
	@@ -92,14 +92,14 @@ Complex Complex :: operator /(const double & aRval)
    return Result;
}

Complex & Complex :: operator += (const   Complex &  aRval)
{
    Re += aRval.Re;
    Im += aRval.Im;
    return * this;
}

Complex & Complex :: operator -= (const Complex & aRval)
{
    Re -= aRval.Re;
    Im -= aRval.Im;
	@@ -126,7 +126,7 @@ Complex & Complex :: operator -= (const double & aRval)
    return * this;
}

Complex & Complex :: operator *= (const double & aRval)
{
    Re *= aRval;
    Im *= aRval;
	@@ -142,8 +142,8 @@ Complex & Complex :: operator /= (const double & aRval)

Complex & Complex :: operator = (const Complex & aRval)
{
    Re = aRval.Re;
    Im = aRval.Im;
    return * this;
}

	@@ -154,19 +154,19 @@ Complex & Complex ::operator = (const double & aRval)
    return * this;
}

istream & operator >> (istream & stream, Complex & aRval)
{
    char tmp[256];
    stream >> aRval.Re >> aRval.Im >> tmp;
    return stream;
}

ostream & operator << (ostream & stream, Complex & aRval)
{
    stream << aRval.Re;
    if(!(a.Im < 0))
        stream << '+';
    stream << aRval.Im << 'i';
    return stream;
}

	@@ -182,14 +182,14 @@ Complex operator - (const double & aLval, const Complex & aRval)
{
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im =- aRval.Im;
    return Result;
}

Complex operator * (const double & aLval, const Complex & aRval)
{
    Complex r;
    r.Re = aLval * aRval.Re;
    r.Im = aLval * aRval.Im;
    return r;
}
