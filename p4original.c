
#include<stdio.h>

int input_number()
{
  int a;
  printf("enter the number of fibonacci sequence: \n");
  scanf("%d",&a);
  return a;
}

int find_fibo(int n,int fi[n])
{
  
  fi[1]=0;
  fi[2]=1;
  for(int i=3;i<=n;i++)
    {
      fi[i]=fi[i-1]+fi[i-2];
    }
  return fi[n]; 
}
void output(int n,int fibo)
{
  printf("the %d th fibonic number is %d",n,fibo);
}

int main()
{
  int n;
  n=input_number();
  int fibonic[n];
  find_fibo(n,fibonic);
  output(n,fibonic[n]);
  return 0;
}