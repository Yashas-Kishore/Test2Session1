#include<stdio.h>

int input_number()
{
  int a;
  printf("enter the number to check : \n");
  scanf("%d",&a);
  return a;
}


int is_prime(int n,int prime)
{
  prime=0;
  for(int i=1;i<=n;i++)
  {
    if(n % i==0)
    {
      prime +=1;
    }
  }
  return prime;
}
void output(int n, int a)
{
  if(a>2)
  {
    printf("the given number %d is composite",n);
  }
  else
  {
    printf("the given number %d is prime",n);
  }
}

int main()
{
  int p,q,r;
  p=input_number();
  q=is_prime(p,q);
  output(p,q);
  return 0;

}