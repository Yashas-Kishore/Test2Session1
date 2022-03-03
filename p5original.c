#include<stdio.h>
#include<math.h>

int input_array_size()
{
  int N;
  printf("enter number of input to find the prime numbers\n");
  scanf("%d",&N);
  return N;
}

void init_array(int n, int a[n])
{
  int i=0;
  for(i=0;i<n;i++)
    {
      printf("enter the value :\n");
      scanf("%d",&a[i]);
      
    }
}

void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i = 1; i <= sqrt(n); i++)
    {
      if(a[i] == 1)  
        {  
          for(j = i * i; j < n; j += i)
            {
              a[j] = 0; 
            }  
        }  
    }
}

  
    for(i = 2; i <= num; i++)  
    {  
        if(a[i] == 1)  
        {  
            for(j = i * i; j < N; j += i)  
                a[j] = 0;  
        }  
    }  