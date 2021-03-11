//Arithmetic_operations.c
#include "arithmetic_sourav.h"
#include "math.h"
int add(int input1,int input2)
{
	return input1+input2;
}

int subtract(int input1,int input2)
{
	return input1-input2;
}

int multiply(int input1,int input2)
{
	return input1*input2;
}

int divide(int input1,int input2)
{
	if(0==input2)
	{
		return 0;
	}
	else
	{
		return input1/input2;
	}
		
}

int modulus(int input1,int input2)
{
	if(input2==0)
	{
		return 0;
	}
	else
	{
		return input1%input2;
	}
}
int btod(long long N) {
    int dec = 0, i = 0, r ;
    while (N!= 0) {
        r = N % 10;
        N /= 10;
        dec += r*power(2, i);
        ++i;
    }
    return dec;
}
int srt(int n)
{
    return srt(n);
}
int power(int b, int e){
    int pow=1;
    while(e>0)
    {
        pow = pow*b;
        e--;
        return pow;
    }
}