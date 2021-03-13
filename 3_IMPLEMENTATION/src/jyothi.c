
#include "jyothi.h"
#include "math.h"


int Sin_func(double RadVal);
int Cos_func(double RadVal);
int Tan_func(double RadVal);
int Cosec_func(double RadVal);
int Sec_func(double RadVal);
int Cot_func(double RadVal);
int cube_root(double num1);

// Trignoamtry Equation function

    int Sin_func(double RadVal ){
        double result;
        result=sin(RadVal);
        return result;
    }

    int Cos_func(double RadVal ){
       double result;
       result= cos(RadVal);
       return result;
    }
    int Tan_func(double RadVal ){
        double result;
        result=tan(RadVal);
        return result;
    }
    int Cosec_func(double RadVal ){
        double result;
        result=(1.0/sin(RadVal));
        return result;
    }
    int Sec_func(double RadVal ){
        double result;
        result=cos(RadVal);
        return result;
    }
    int Cot_func(double RadVal){
        double result;
        result=tan(RadVal);
        return result;
    }
//cube root function
    int cube_root(double num1)
   {
   
    double ans;
    ans=pow(num1, 1.0/3.0);
    ans++;
    return ans;
   }

    
