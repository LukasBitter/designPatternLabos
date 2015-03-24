#include "complex.h"

Complex::Complex(double Real /*= 0*/,double Imaginary /*= 0*/)
{
    this->Real = Real;
    this->Imaginary = Imaginary;
}

double Complex::GetRealPart() const
{
    return this->Real;
}
double Complex::GetImagPart() const
{
    return this->Imaginary;
}

void Complex::SetRealPart(double Value)
{
    this->Real = Value;
}

void Complex::SetImagPart(double Value)
{
    this->Imaginary = Value;
}

Complex operator+(const Complex& C1,const Complex& C2)
{
    double RealTemp = C1.GetRealPart() + C2.GetRealPart();
    double ImgTemp = C1.GetImagPart() + C2.GetImagPart();

    Complex Temp(RealTemp,ImgTemp);
    return Temp;
}

Complex operator-(const Complex& C1,const Complex& C2)
{
    double RealTemp = C1.GetRealPart() - C2.GetRealPart();
    double ImgTemp = C1.GetImagPart() - C2.GetImagPart();

    Complex Temp(RealTemp,ImgTemp);
    return Temp;
}

Complex operator*(const Complex& C1,const Complex& C2)
{
    double x = C1.GetRealPart(); double u = C2.GetRealPart();
    double y = C1.GetImagPart(); double v = C2.GetImagPart();

    double Real = x*u - y*v;
    double Img = x*v + y*u;

    Complex Temp(Real,Img);
    return Temp;
}

Complex operator/(const Complex& C1,const Complex& C2)
{
    double x = C1.GetRealPart(); double u = C2.GetRealPart();
    double y = C1.GetImagPart(); double v = C2.GetImagPart();

    double Div = pow(u,2) + pow(v,2);
    double Real = (x * u + y * v) / Div;
    double Img = (-x * v + y * u) / Div;


    Complex Temp(Real,Img);
    return Temp;
}

Complex operator-(const Complex& C1)
{
    double RealTemp = -C1.GetRealPart();
    double ImgTemp = C1.GetImagPart();
    Complex Temp(RealTemp,ImgTemp);
    return Temp;
}

Complex operator!(const Complex& C1)
{
    double RealTemp = C1.GetRealPart();
    double ImgTemp = -C1.GetImagPart();
    Complex Temp(RealTemp,ImgTemp);
    return Temp;
}

std::ostream& operator<<(std::ostream& OutStream,const Complex& c)
{
    OutStream   << "Real Part = "       << c.GetRealPart() << std::endl
                << "Imaginary Part = "  << c.GetImagPart() << std::endl;

    return OutStream;
}
