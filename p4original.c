
#include<stdio.h>

int input_number()
{
  int a;
  printf("enter the number of fibonacci sequence: \n");
  scanf("%d",&a);
  return a;
}

int find_fibo(int n,int fib[n])
{
  fib[n]=0;
  for(int i=3;i<=n;i++)
    {
      int fib[1]=0;
      int fib[2]=1;
      fib[n]=fib[i-1]+fib[i-2];
    }
  return fib[n];
}
void output(int n,int fibo)
{
  printf("the %d th fibonic number is %d",n,fibo);
}

int main()
{
  int 
}