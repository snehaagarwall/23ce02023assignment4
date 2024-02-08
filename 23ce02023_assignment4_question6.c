#include<stdio.h>
int main()
{
    int ch,a,b,x;
    printf("enter a and b");
    scanf("%d %d", &a,&b);
    printf("\n1:for addition");
    printf("\n2:for subtraction");
    printf("\n3:for multiplication");
    printf("\n4:for division");
    printf("\n enter choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    x=a+b;
    printf("\n x=%d",x);
        break;
    case 2:
    x=a-b;
    printf("\n x=%d",x);
    break;
    case 3:
    x=a*b;
    printf("\n x=%d",x);
    break;
    case 4:
    x=a/b;
    printf("\n x=%d",x);
    break;
    default :
    printf("not valid");
    }
    return 0;
}