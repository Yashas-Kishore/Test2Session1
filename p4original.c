
#include<stdio.h>

int input_number()
{
  int a;
  printf("enter the number of fibonacci sequence: \n");
  scanf("%d",&a);
  return a;
}

void find_fibo(int n,int *fi[n])
{
  fi[n]=0;
  *fi[1]=0;
  *fi[2]=1;
  for(int i=3;i<=n;i++)
    {
      *fi[n]=*fi[i-1]+*fi[i-2];
    }
}
void output(int n,int *fibo)
{
  printf("the %d th fibonic number is %d",n,*fibo);
}

int main()
{
  int n;
  n=input_number();
  int fibonic[n];
  find_fibo(n,&fibonic[n]);
  output(n,fibonic);
  return 0;
}