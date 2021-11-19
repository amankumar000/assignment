#include<stdio.h>
int main()
{
    char ch;
    printf("Enter value of ch");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
    {
        printf("ch is lowercase alphabet");
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("ch is uppercase alphabet");
    }
    else
    {
        printf("invalid entry");
    }
    
    return 0;
}