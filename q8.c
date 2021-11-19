#include<stdio.h>
int main()
{
    char ch;
    printf("Enter value of ch");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("ch is vowel");
    }
    else
    {
        printf("ch is consonant");
    }
    
    return 0;
}