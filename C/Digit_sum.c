#include<stdio.h>
int main()
{
    int d;
    int sum=0,n;
    printf("Enter the flat number\n");
    scanf("%d",&n);
    if(n<0)
        n=-n;
    while(n > 0)
    {
    d = n%10;
    sum=sum+d;
    n=n/10;
    }
    if(sum%2 == 0)
        printf("0");
    else
        printf("1");
    
    return 0;
}