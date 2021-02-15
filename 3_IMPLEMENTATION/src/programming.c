

#include"programming.h"
int main()
{
    int select_option;
    double RadianValue;
    double Degrees_Value;
    int ask_User;
    do
    {
        printf("Enter Degrees Value\n");
        scanf("%lf",&Degrees_Value);
        printf("Please Choose  only one option for Trigonometry Operation\n");
        printf(" 1. Sin\n 2. cos\n 3. Tan\n 4. Sec\n 5. Cosec \n 6. Cot\n");
        scanf("%d",&select_option);
        RadianValue=0.017*Degrees_Value;
        switch(select_option)
        {

            case 1: Sin_fun(RadianValue);
            break;
            case 2: Cos_fun(RadianValue);
            break;
            case 3: Tan_fun(RadianValue);
            break;
            case 4: Sec_fun(RadianValue);
            break;
            case 5: Cosec_fun(RadianValue);
            break;
            case 6: Cot_fun(RadianValue);
            break;
            default: printf("Inavlid Input!!!! Please choose Correct option\n");
            break;
        }

        printf("DO You want calculate again? \n1. Yes 2. No\n");
        scanf("%d",&ask_User);
    }
    while(ask_User==1);
}
    void Sin_fun(double RadianValue ){
        printf("\n %lf\n",sin(RadianValue));
    }
    void Cos_fun(double RadianValue ){
        printf("\n %lf\n",cos(RadianValue));
    }
    void Tan_fun(double RadianValue ){
        printf("\n %lf\n",tan(RadianValue));
    }
    void Cosec_fun(double RadianValue ){
        printf("\n %lf\n",(1.0/sin(RadianValue)));
    }
    void Sec_fun(double RadianValue ){
        printf("\n %lf\n",(1.0/cos(RadianValue)));
    }
    void Cot_fun(double RadianValue ){
        printf("\n %lf\n",(1.0/tan(RadianValue)));
    }
{
 int ask_user;
 int select_option;    
 float input;
 double log_value;
 double cuberoot_value;

 printf("Please enter the value:\n");
 scanf("%f",&input);
 printf("Please choose only one option for special math functions:\n");
 printf(" 1. logarithm calculation\n 2. cuberoot calculation\n");
 scanf("%d",&select_option);
 switch(select_option)
 {
    case 1 :
    log_value = log10(input);
    printf("logarithm of %f is %.2f\n",input,log_value);
    break;
    case 2:
    cuberoot_value = cbrt(input);
    printf("cuberoot of  %f is %.2f\n",input,cuberoot_value);
    break;
    default:
    printf("Invalid input!!! Please choose the correct option\n");
    break;
 }
