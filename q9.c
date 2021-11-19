#include<stdio.h>
int main()
{
    char ch;
    printf("Enter value of ch");
    scanf("%c",&ch);
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
       printf("ch is alphabet");
    }
    else if (ch>=0&&ch<=9)
    {
        printf("ch is digit");
    }
    else
    {
        printf("ch is a special character");
    }
    
    return 0;
}