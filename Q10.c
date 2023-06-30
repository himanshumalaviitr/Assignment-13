// Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p;
    printf("enter number and power:- ");
    scanf("%d%d",&n,&p);
    printf("\n%d^%d=%d",n,p,power(n,p));
    getch();
    return 0;
}
int power(int n,int p)
{
    if(p==0)
        return 1;
    else
    {
         return n*power(n,p-1);
    }
}
