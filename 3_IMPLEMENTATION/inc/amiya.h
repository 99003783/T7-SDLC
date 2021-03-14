#ifndef _AMIYA_H__
#define _AMIYA_H__


typedef struct complex 
{
    float real;
    float imag;
} complex;

complex add_C(complex n1, complex n2);
complex sub_C(complex n1, complex n2);
complex mul_C(complex n1, complex n2);
complex div_C(complex n1, complex n2);



#endif
