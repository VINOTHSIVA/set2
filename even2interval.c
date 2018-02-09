#include <stdio.h>
void main()
{
    int a,b,i,x;
    printf("enter the values of a");
    scanf("%d",&a);
    printf("\nenter the values of b");
    scanf("%d",&b);
    printf("\n%d%d the two even number:",a,b);
    for(i=a;i<=b;i++)
    {
        x=i%2;
        if(x==0)
        printf("\n%d",i);
    }
}
