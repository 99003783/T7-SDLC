#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int btod(long long N) {
    int dec = 0, i = 0, r;
    while (N!= 0) {
        r = N % 10;
        N /= 10;
        dec += r*pow(2, i);
        ++i;
    }
    return dec;
}
int srt(int n)
{
    return sqrt(n);
}
int power(int b, int e){
    int pow=1;
    while(e>0)
    {
        pow = pow*b;
        e--;
    }
}