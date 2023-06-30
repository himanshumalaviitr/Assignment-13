#include<stdio.h>
#include<conio.h>
int main()
{
   fibo(8);
}

// 1 sum of first N natural no.
int Nsum(int n)
{
    int s=0;
    if(n==1)
        return 1;
    else
    {
     s=n+Nsum(n-1);
     return s;
    }
}

// 2 sum of first N odd natural no.
int NOsum(int n)
{
    int s=0;
    if(n==1)
        return 1;
    else
    {
     s=2*n-1+NOsum(n-1);
     return s;
    }
}

// 3 sum of first N even natural no.
int NEsum(int n)
{
    int s=0;
    if(n==1)
        return 2;
    else
    {
     s=2*n+NEsum(n-1);
     return s;
    }
}

// 4 sum of square of first N natural no.
int SNsum(int n)
{
    int s=0;
    if(n==1)
        return 1;
    else
    {
     s=n*n+SNsum(n-1);
     return s;
    }
}

// 5 sum of digit of given no.
int Dsum(int n)
{
  int s=0;
  if(n==0)
    return 0;
  else
  {
      s=n%10+Dsum(n/10);
      return s;
  }
}

// 6 factorial
int fact(int n)
{
   int f=1;
   if(n==1)
    return 1;
   else
   {
    f=n*fact(n-1);
    return f;
   }
}

//HCF
int HCF(int n,int r)
{
    if(n%r==0)
        return r;
    else
        return HCF(r,n%r);
}


// 8 N terms of Fibonacci series
int fibo(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
