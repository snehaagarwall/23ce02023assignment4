#include<stdio.h>
int main()
{
    float age,discountpercent,stdrate;
    float ticketprice;
    printf("enter age:");
    scanf("%f",&age);
    if(age<5){
        printf("entry for free");
    
    }
    else if(age>=5 && age<=12){
        printf("ticket price is 20 rupees");
    }
    else if(age>=13 && age<=59){
        stdrate==50;
        printf("ticket price is 50 rupees");
    }
    else if(age>=60){
        discountpercent=20;
        stdrate=50;
        ticketprice=stdrate-(discountpercent*stdrate/100);
        printf("ticket price is %f", ticketprice);
    }
    }