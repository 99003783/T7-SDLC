#include "aman.h"
#include <stdio.h>
#include <math.h>

// binary to decimal
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
//squareroot of the number
int srt(int n)
{
    int squareroot;
    return squareroot;
}

int power(int b, int e){
    int pow=1;
    while(e>0)
    {
        pow = pow*b;
        e--;
    }
    return pow;
}

