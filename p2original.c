#include<stdio.h>
typedef struct _complex
{
float abscissa;
float ordinate;
}Coordinate;

Coordinate input_line()
{
  Coordinate c;
  printf("enter the coordinates point x and y as in (x,y)\n");
  scanf("%f%f",&c.abscissa,&c.ordinate);
  return c;
}

float d_sqrt(float n)
{
  float z;
  double sqrt =0,i,x;
  i=n/2;
  while (i<=n/2){
    x=(i + n/i)/2;
    z=x;
    if(z==i){
      sqrt=z;
      return sqrt;
    }
    else
    i=z;
    
  }
  return sqrt;
}

float find_distance(Coordinate m,Coordinate n)
{
  float p,q,r,distance;
  p=(m.abscissa-n.abscissa)*(m.abscissa-n.abscissa);
  q=(m.ordinate-n.ordinate)*(m.ordinate-n.ordinate);
  r=p+q;
  distance=d_sqrt(r);
  return distance;
}

int is_triangle(Coordinate p,Coordinate q,Coordinate r)
{
  int check;
  float f,g,h;
  f=find_distance(p,q);
  g=find_distance(r,q);
  h=find_distance(r,p);
  if(f==g+h)
  {
    check=1;
    return check;
  }
  if(h==g+f)
  {
    check=1;
    return check;
  }
  if(g==f+h)
  {
    check=1;
    return check;
  }
  else 
  {
    check=2;
    return check;
  }
}
void output(Coordinate p,Coordinate q,Coordinate r, int istrgl)
{
  if(istrgl==1)
  {
    printf("the points don't form a triangle\n");
  }
  else
  {
    printf("the points does form a triangle\n");
  }
}

int main()
{
  Coordinate j,k,l;
  int g;
  j=input_line();
  k=input_line();
  l=input_line();
  g=is_triangle(j,k,l);
  output(j,k,l,g);
  return 0;
}