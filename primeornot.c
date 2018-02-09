#include <stdio.h>
void main()
{
    int a, i,x = 0;

    printf("Enter a positive integer");
    scanf("%d",&a);

    for(i=2; i<=a/2; ++i)
    {
        if(a%i==0)
        {
            x=1;
            break;
        }
    }

    if (x==0)
    printf("it is a prime number");
    else
        printf("it is not a prime number");
}
