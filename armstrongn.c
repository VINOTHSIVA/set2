#include <stdio.h>
void main()
{
    int n,a,x,sum;
    printf("enter the armstrong values");
    scanf("%d",&n);
    sum=0;
    a=n;
    while(n>0)
    {
        x=n%10;
        sum=sum+x*x*x;
        n=n/10;
    }
    if(sum==a)
        printf("armstrong");
    else
        printf("not armstrong");
    
}
