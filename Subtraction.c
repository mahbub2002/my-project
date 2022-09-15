/* write a c program for getting two integer number from user
then display Subtraction of these two numbers */

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two integer numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d - %d = %d",x,y,x-y);
    return 0;
}
