/* write a c program to calculate your age*/
// Mahbub Chowdhury
// Department of CSE
// Id:2202026011

#include<stdio.h>
int main()
{
    do
    {
        int d1,m1,y1;
        int d2,m2,y2;
        char op;

        printf("\n\n today's date = ");
        scanf("%d",&d1);

        printf("\n present month = ");
        scanf("%d",&m1);

        printf("\n present year = ");
        scanf("%d",&y1);
//*************************
        printf("\n***********************************************");
        printf("\n birth date = ");
        scanf("%d",&d2);

        printf("\n birth month = ");
        scanf("%d",&m2);

        printf("\n birth year = ");
        scanf("%d",&y2);



//************************************
        if((d1<0)||(d1>31)||(d2<0)||(d2>31)||(m1<0)||(m1>12)||(m2<0)||(m2>12))

            printf("\nYou enter an invalid number");
        else if((d1>=d2) && (m1>=m2))
        {
            printf("\n\t year = %d",(y1-y2));
            printf("\t month = %d",(m1-m2));
            printf("\t day = %d",(d1-d2));

        }

        else if((d1<d2)&&(m1>m2))

        {
            printf("\n\t year = %d",(y1-y2));
            printf("\t month = %d",(m1-1-m2));
            printf("\t day = %d",(d1+30-d2));

        }
        else if((d1>=d2)&&(m1<m2))

        {
            printf("\n\t year = %d",(y1-1-y2));
            printf("\t month = %d",(m1+12-m2));
            printf("\t day = %d",(d1-d2));

        }
        else if((d1<d2)&&(m1<m2))

        {
            printf("\n\t year = %d",(y1-1-y2));
            printf("\t month = %d",(m1+11-m2));
            printf("\t day = %d",(d1+30-d2));

        }
        else
            printf("\n invalid");

}
    while(1);

  return 0;
}
