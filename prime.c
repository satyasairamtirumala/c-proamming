#include<stdio.h>
void main()
{
    int a,i;
    int count=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==0)
    {
        printf("given number is a prime number");
    }
    else
    {
        printf("giben number is not a prime number");
    }
}