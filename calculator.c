#include<stdio.h>
int main()
{

    char op;
    float x,y;



    printf("Enter your 1st number = ");

    scanf("%f",&x);

    printf("Enter the operator ( + , - , * , / , % ) = ");

    scanf(" %c",&op);
    printf("Enter your 2nd number = ");

    scanf("%f",&y);

    switch(op)

    {

    case'+':
        printf("%.2f + %.2f = %.2f",x,y,x+y);
        break;
    case'-':
        printf("%.2f - %.2f = %.2f",x,y,x-y);
        break;
    case'*':
        printf("%.2f * %.2f = %.2f",x,y,x*y);
        break;
    case'/':
        if(y!=0)
        printf("%.2f / %.2f = %.2f",x,y,x/y);
        else
            printf("Infinity");
        break;

    default:
        printf("Invalid operators");



    }




    return 0;
}
