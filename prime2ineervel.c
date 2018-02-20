#include <stdio.h>
void main()
{
    int x,y, i,a;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &x, &y);
    printf("Prime numbers between %d and %d are ",x,y) ;

    while (x<y)
    {
        a = 0;
        for(i = 2; i <= x/2; ++i)
        {
            if(x % i == 0)
            {
                a = 1;
            }
        }
        if (a == 0)
            printf("%d ", x);
       ++x;
    }
}
