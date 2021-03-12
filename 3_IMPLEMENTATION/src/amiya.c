#include <stdio.h>

void mathprint()
{
    int a=0, b=0, res=0;
    printf("Enter two integers: "); 
    scanf("%d %d", &a, &b); 
    
    res=a+b;
    printf("  %d\n",a);
    printf("+");
    
    printf(" %d\n-----------\n  %d",b,res); 
    
   
    
}






void cx()
{
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
    scanf("%f %f", &n2.real, &n2.imag);
    

 


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


printf("Sum = %.1f + %.1f", result.real, result.imag);
}


complex add(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}
