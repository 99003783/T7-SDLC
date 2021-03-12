#include <stdio.h>
#include "arithmetic_sourav.h"
#include "math.h"
#include "aman.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
long long n;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULUS, SQUAREROOT, BINARYTODECIMAL, POWER, EXIT };


/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.Modulus\n6. Square root\n7. Binary to Decimal\n8. Power\n9. Exit");

    printf("\n\tEnter your choice\n");
   
     // __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
    if(SQUAREROOT == calculator_operation)
    {
        printf("\nEnter a number\n");
        scanf("%d", &calculator_operand1);
    }
    if(BINARYTODECIMAL == calculator_operation)
    {
        printf("\nEnter a number\n");
        scanf("%lld", &n);
    }
   
    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        // __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case MODULUS:
            printf("\n\t%d mod %d = %d\nEnter to continue",
            calculator_operand1,calculator_operand2,modulus(calculator_operand1, calculator_operand2));
    
        case BINARYTODECIMAL:
            printf("\n\t%d = %d\nEnter to continue",
            calculator_operand1,
            btod(n));
        case SQUAREROOT:
            printf("\n\t%d = %d\nEnter to continue",
            calculator_operand1,
            srt(calculator_operand1));    
        case POWER:
            printf("\n\t%d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            power(calculator_operand1, calculator_operand2));
        case 9:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}