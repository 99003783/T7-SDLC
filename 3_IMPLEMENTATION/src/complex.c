#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;1

complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
int main() {
    complex n1, n2, result;
 int ch;
     
     printf("enter 1 for addition");
        printf("enter 2 for substraction");
        scanf("%d",&ch);
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);2
    

 


    if(ch==1)
    {
        
    result = add(n1, n2);
    }
else if(ch==2)
{
result = sub(n1, n2);
}
else
{
printf("choose correct value");
}

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}