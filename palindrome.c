#include<stdio.h>
int main()
{
    int  n;
    int digit1,digit2,digit3,digit4,digit5;

    printf("%s","Enter a number:");
    scanf("%c",&n,&digit1,&digit2,&digit3,&digit4,&digit5);


    if(digit1==digit5 && digit2==digit4)
        printf("%s","palindrome");
    else
        printf("%s","Not palindrome");
    return 0;


}
