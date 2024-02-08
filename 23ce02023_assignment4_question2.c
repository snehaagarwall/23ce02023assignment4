#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b and c");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("a=%d is maximum", a);
    }
    else if(b>a && b>c)
    {
    printf("b=%d is maximum", b);
    }
    else{
        printf("c=%d is maximum", c);
    }
}