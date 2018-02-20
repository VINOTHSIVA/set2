#include<stdio.h>
void main()
{
    int a,b,i;

    printf("enter the values of a");
    scanf("%d",&a);
    printf("enter the values of b");
    scanf("%d",&b);
    for(i=0;i<=b;i++)
    {
        if(i%2==1)
        printf("%d\n",i);
    }
}
