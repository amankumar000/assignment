#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a");
    scanf("%d",&a);
    if (a%4==0&&a%100&&1%400)
    {
        printf("a is leap year");
    }
    else
    {
        printf("a is not a leap yaer");
    }
    
    return 0;

}