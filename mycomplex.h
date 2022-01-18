/*!
    @file
    @brief ������������ ���� ������ Complex.
*/
#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>
using namespace std;

/*!
    @brief ����� ������������ �����
*/
class Complex
{
    /*!
        @brief �������������� ������������
    */
    double Re;

    /*!
        @brief ������ ������������
    */
    double Im;

    /*!
        @brief ������ ������ ������
    */
    public:
        Complex(double aRe = 0, double aIm = 0);
        Complex(const Complex &);
        ~ Complex();

        /*!
            @brief ������������ ������ � �������������� ������������
        */
        void Set(double aRe, double aIm = 0);
        operator double();

        /*!
            @brief ������ ������������ �����
        */
        double abs();

        /*!
            @brief ������������� ����� �������� ���������� ����� >>
        */
        friend istream & operator >> (istream &, Complex &);


        /*!
            @brief ������������� ����� �������� ���������� ������ <<
        */
        friend ostream & operator << (ostream &, Complex &);
        Complex operator + (const Complex &);
        Complex operator - (const Complex &);
        Complex operator + (const double &);

        /*!
            @brief  ������������� ����� �������� ��������
        */
        friend Complex operator + (const double &, const Complex &);
        Complex operator - (const double &);

        /*!
            @brief  ������������� ����� �������� ���������
        */
        friend Complex operator - (const double &, const Complex &);
        Complex operator * (const Complex &);
        Complex operator * (const double&);

        /*!
            @brief  ������������� ����� �������� ���������
        */
        friend Complex operator * (const double &, const Complex &);
        Complex operator / (const double &);
        Complex & operator += (const Complex &);
        Complex & operator -= (const Complex &);
        Complex & operator *= (const Complex &);
        Complex & operator += (const double &);
        Complex & operator -= (const double &);
        Complex & operator *= (const double &);
        Complex & operator /= (const double &);
        Complex & operator = (const Complex &);
        Complex & operator = (const double &);
};
#endif
