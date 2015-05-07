/**
    Complex Class - Description File
    Purpose: This class is used to implement a complex number.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <math.h>
#include <iostream>

class Complex
{
public:
    // constructor, first arg sets real part, second arg sets imag part,
    // defaults are set to 0
    Complex(double Real = 0,double Imaginary = 0);

    /////////////////////////////////////////////////
    ///                 Getters                    //
    /////////////////////////////////////////////////

    // returns the real part of the complex number
    double GetRealPart() const;

    // returns the imaginary part of the complex number
    double GetImagPart() const;

    /////////////////////////////////////////////////
    ///                 Setters                    //
    /////////////////////////////////////////////////

    // sets the real part of the complex number to the double arg
    void SetRealPart(double Value);

    // sets the imaginary part of the complex number to the double arg
    void SetImagPart(double Value);

    /**
     * @brief Norm
     * @return Norm of the complex number
     */
    double Norm()
    {
        return sqrt(pow(this->GetRealPart(),2) + pow(this->GetImagPart(),2));
    }

private:
    // variables for holding the real and imaginary parts
    double Real;
    double Imaginary;

public:
    // A simple complex number class
    // friend functions and overloads
    friend double Abs(const Complex& CNumber)
    {
        return sqrt(pow(CNumber.GetRealPart(),2) + pow(CNumber.GetImagPart(),2));
    }

    friend Complex operator+(const Complex&,const Complex&);
    friend Complex operator-(const Complex&,const Complex&);
    friend Complex operator*(const Complex&,const Complex&);
    friend Complex operator/(const Complex&,const Complex&);
    friend Complex operator-(const Complex&); //negation
    friend Complex operator!(const Complex&); //conjugation
    friend std::ostream& operator<<(std::ostream&,const Complex&);
};

#endif // COMPLEX_H
