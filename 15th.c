#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,s=0;
    printf("Enter the number.");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(i=3; i<=n; i++)
    {
        s=a+b;
        printf("\t%d",s);
        a=b;
        b=s;
    }
}
