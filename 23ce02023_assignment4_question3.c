#include<stdio.h>
int main()
{
    int creditscore,intrate,balance;
    float totalinterest;
    printf("\n enter creditscore: ");
    scanf("%d", &creditscore);
     printf("\n enter current balance");
     scanf("%d", &balance);
    if(creditscore<600)
    {
        intrate=15;
        totalinterest=balance*15/100;
        printf("total is %f", totalinterest);
    }
    else if(creditscore>600 && creditscore<750)
    {
        intrate=12;
        totalinterest=balance*12/100;
        printf("total is %f", totalinterest);
    }
    else{
        intrate=10;
        totalinterest=balance*10/100;
        printf("total is %f", totalinterest);
    }
}