#include<stdio.h>
int main()
{
    int n,s=0,d,i;
    printf("Enter the number ");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(s==i)
    printf("The given number is palindrome.");
    else
    printf("The given number is not palindrome.");
    return 0;
}
