//Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no:-");
    scanf("%d",&n);
    printf("no of digit= %d",countD(n));
    getch();
    return 0;
}

int countD(int n)
{
  int i=0;
  if(n==0)
    return 0;
  else
  {
   i=1+countD(n/10);
   return i;
  }
}
