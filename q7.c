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
    else
    {
        printf("ch is not a alphabet");
    }
    
    return 0;
}