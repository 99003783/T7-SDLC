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
