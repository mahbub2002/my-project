#include<stdio.h>
int main()
{
    char op;
    float num1,num2;
    printf("Enter your 1st number = ");
    scanf("%f",&num1);

    printf("Enter the operator = ");
    scanf(" %c",&op);

    printf("Enter your 2nd number = ");
    scanf("%f",&num2);

    switch(op)
    {
    case'+':
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;

    case'-':
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;

    case'*':
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
     break;

    case'/':
        if(num2!=0)
        printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
        else
            printf("Infinity");
    break;


    default:
        printf("You enter an invalid operator");





    }
    return 0;
}
