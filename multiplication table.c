#include <stdio.h>
void main()
{
    int n,i;
    printf("ENTER a number");
    scanf("%d",n);
    if(n%2==0)
    {
        for(i=1;i<=15;i++)
        {
        printf("%d * %d = %d",n,i,n*i);
        }
    }
    else
    {
        for(i=1;i<=10;i++)
        {
             printf("%d * %d = %d",n,i,n*i);
        }
    }
}