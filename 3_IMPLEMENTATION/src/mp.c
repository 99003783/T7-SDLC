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


typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

 
     int ch;
     
     printf("enter 1 for addition");
        printf("enter 2 for substraction");
        scanf("%d",&ch);

    complex n1, n2, result;

    if(ch==1)
    {
        
    result = add(n1, n2);
    }
elseif(ch=2)
{
result = sub(n1, n2);
}
else
{
printf("choose correct value");
}
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;


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

int main()
{
    int ch;
    printf("enter 1 for mathprint");
    printf("enter 2 for complex");
    scanf("%d",&ch);
    switch(ch)
    {

    
    case 1:
    mathprint(); 
    break;

    case 2:
    complex(a,b);
printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);


    break;
  default:
  printf("choose the correct no.");
  break;
    }

}

