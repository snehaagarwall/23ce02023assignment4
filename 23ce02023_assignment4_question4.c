#include<stdio.h>
int main()
{
    int ch;
    printf("1:Monday");
    printf("\n2:Tuesday");
    printf("\n3:Wednesday");
    printf("\n4:Thursday");
    printf("\n5:Saturday");
    printf("\n6:Saturday");
    printf("\n7:Sunday");
    printf("\nenter ch");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("Monday");
    
        break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wedbesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("not valid");
        break;
    }
    return 0;
}