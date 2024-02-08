#include<stdio.h>
int main()
{
    int n,o,t,h; //h is hundreds place, t is tenths place , o is ones place
    printf("enter n :"); 
    scanf("%d", &n);
    h=n/100;
    t=(n/10)-(h*10);
    o=n-(h*100)-(t*10);
    if(n<100 || n>999)
    {
        printf("invalid");
    }
    else if((o*o*o)+(t*t*t)+(h*h*h)==n)
    {
        printf("Yes");

    }
    else if((o*o*o)+(t*t*t)+(h*h*h)!=0)
    {
        printf("NO");
    }
    
}