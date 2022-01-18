/*!
    @file
    @brief ���� � ��������� ������� ������ Complex
*/
#include <iostream>
#include <cmath>
#include "mycomplex.h"
using namespace std;
/*!
    @brief ����������� ������.
    @param aRe �������������� ������������
    @param aIm ������ ������������
*/
Complex::Complex(double aRe, double aIm)
{
    Re = aRe;
    Im = aIm;
}
/*!
    @brief ����������� ������.
    @param aRval - ����������� �����
*/
Complex::Complex(const Complex & aRval)
{
    Re = aRval.Re;
    Im = aRval.Im;
}
/*!
    @brief ���������� ������
*/
Complex::~Complex()
{
    Re = 0.0;
    Im = 0.0;
}
/*!
    @brief ������������ ������ � �������������� ������������
*/
void Complex::Set(double aRe, double aIm)
{
    Re = aRe;
    Im = aIm;
}
/*!
    @brief ���������� ������ ������������ �����
    @return ������ ������������ �����
*/
Complex::operator double()
{
    return abs();
}
/*!
    @brief ���������� ������ ��������� ������������ �����
    @return ������ ��������� ������������ �����
*/
double Complex::abs()
{
    return sqrt(Re * Re + Im * Im);
}
/*!
    @brief ���������� ��������� �������� ������������ �����
    @return ��������� �������� ������������ �����
*/
Complex Complex::operator + (const Complex & aRval)
{
    Complex Result;
    Result.Re = Re + aRval. Re;
    Result.Im = Im + aRval.Im;
    return Result;
}
/*!
    @brief ���������� ��������� ��������� ������������ �����
    @return ��������� ��������� ������������ �����
*/
Complex Complex::operator - (const Complex & aRval)
{
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}
/*!
    @brief ���������� ��������� �������� ��������������� �����
    @return ��������� �������� ��������������� �����
*/
Complex Complex::operator + (const double & aRval)
{
    Complex Result;
    Result.Re = Re + aRval;
    Result.Im = Im;
    return Result;
}
/*!
    @brief ���������� ��������� ��������� ��������������� �����
    @return ��������� ��������� ��������������� �����
*/
Complex Complex::operator - (const  double & aRval)
{
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}
/*!
    @brief ���������� ��������� ��������� ������������ �����
    @return ��������� ��������� ������������ �����
*/
Complex Complex::operator * (const Complex  & aRval)
{
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}
/*!
    @brief ���������� ��������� ��������� ��������������� �����
    @return ��������� ��������� ��������������� �����
*/
Complex Complex::operator * (const double & aRval)
{
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}
/*!
    @brief ���������� ��������� ������� ��������������� �����
    @return ��������� ������� ��������������� �����
*/
Complex Complex::operator /(const double & aRval)
{
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}
/*!
    @brief ��������� �� ��������� �������� ������������ �����
    @return ������� �� �������� ��������
*/
Complex & Complex::operator += (const   Complex &  aRval)
{
    Re += aRval.Re;
    Im += aRval.Im;
    return *this;
}
/*!
    @brief ��������� �� ��������� ��������� ������������ �����
    @return ������� �� �������� ���������
*/
Complex & Complex::operator -= (const Complex & aRval)
{
    Re -= aRval.Re;
    Im -= aRval.Im;
    return * this;
}
/*!
    @brief ��������� �� ��������� ��������� ������������ �����
    @return ������� �� �������� ���������
*/
Complex & Complex::operator *= (const Complex & aRval)
{
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}
/*!
    @brief ��������� �� ��������� �������� ��������������� �����
    @return ������� �� �������� ��������
*/
Complex& Complex::operator += (const double& aRval)
{
    Re += aRval;
    return *this;
    }
/*!
    @brief ��������� �� ��������� ��������� ��������������� �����
    @return ������� �� �������� ���������
*/
Complex & Complex::operator -= (const double & aRval)
{
    Re -= aRval;
    return *this;
}
/*!
    @brief ��������� �� ��������� ��������� ��������������� �����
    @return ������� �� �������� ���������
*/
Complex & Complex::operator *= (const double & aRval)
{
    Re *= aRval;
    Im *= aRval;
    return *this;
}
/*!
    @brief ��������� �� ��������� ������� ��������������� �����
    @return ������� �� �������� �������
*/
Complex & Complex::operator /= (const double & aRval)
{
    Re /= aRval;
    Im /= aRval;
    return *this;
}
/*!
    @brief ��������� �� ��������� ��������� ������������ �����
    @return ������� �� �������� ���������
*/
Complex & Complex::operator = (const Complex & aRval)
{
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}
/*!
    @brief ��������� �� ��������� ��������� ��������������� �����
    @return ������� �� �������� ���������
*/
Complex & Complex::operator = (const double & aRval)
{
    Re = aRval;
    Im = 0.0;
    return *this;
}
/*!
    @brief ��������� �������������� � ������ ������������
    @return ����������
*/
istream & operator >> (istream & stream, Complex & aRval)
{
    char tmp[256];
    stream >> aRval.Re >> aRval.Im >> tmp;
    return stream;
}
/*!
    @brief ��������� �������������� � ������ ������������
    @return ����������
*/
ostream & operator << (ostream & stream, Complex & aRval)
{
    stream << aRval.Re;
    if(!(aRval.Im < 0))
        stream << '+';
    stream << aRval.Im << 'i';
    return stream;
}
/*!
    @brief ���������� ��������� �������� ��������������� � ������������ �����
    @param aLval �������������� �����
    @return ��������� ��������
*/
Complex operator + (const double & aLval, const Complex & aRval)
{
    Complex Result;
    Result.Re = aLval + aRval.Re;
    Result.Im =  aRval.Im;
    return Result;
}
/*!
    @brief ���������� ��������� ��������� ��������������� � ������������ �����
    @return ��������� ��������
*/
Complex operator - (const double & aLval, const Complex & aRval)
{
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im =- aRval.Im;
    return Result;
}
/*!
    @brief ���������� ��������� ��������� ��������������� � ������������ �����
    @return ��������� ��������
*/
Complex operator * (const double & aLval, const Complex & aRval)
{
    Complex Result;
    Result.Re = aLval * aRval.Re;
    Result.Im = aLval * aRval.Im;
    return Result;
}
