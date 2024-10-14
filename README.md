#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    char op;
    printf("enter the symbol");
    scanf(" %c",&op);
    switch(op)
    {
        case '+': printf("the addition is %d",a+b);
                  break;
        case '-': printf("the subtraction is %d",a-b);
                  break;
        case '*': printf("the multiplication is %d",a*b);
                  break;
        case '/': printf("the division is %d",a/b);
                  break;
        case '%': printf("the modular divison is %d",a%b);
                  break;
        default:printf("you entered wring symbol");
        
    } 
}
