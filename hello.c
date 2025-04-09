#include <stdio.h>
#include "header.h"
int main()
{
// Admas Number
    int n;
    printf("Enter a number is Adams no or Not : ");
    scanf("%d",&n);
    if(adams(n)==1){
        printf("Adams No.\n");
    }
    else{
        printf("Not Adams No.\n");
    }
// Palindrome Number
    int a;
    printf("Enter A Number Is Palindrome Or Not ");

    scanf("%d", &a);
    if (palindrome(a) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palidrome\n");
    }    
// Perfect Number
    int b;
    printf("Enter number is perfect or not : ");
    scanf("%d",&b);
    if(perfect(b)==1){
        printf("Perfect.");
    }
    else{
        printf("Not Perfect.");
    }
}    
