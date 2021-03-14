#include <stdio.h>
#include "amiya.h"


complex add_C(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}// complex addition
complex sub_C(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}// complex substraction
complex mul_C(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real * n2.real;
    temp.imag = n1.imag * n2.imag;
    return (temp);
}//complex multiplication
complex div_C(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real / n2.real;
    temp.imag = n1.imag / n2.imag;
    return (temp);
}//complex division
