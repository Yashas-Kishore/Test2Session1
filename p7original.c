#include<stdio.h>
#include<math.h>

typedef struct _point 
{
float x,y;
}Point;

struct _line
{
Point p1,p2;
};
typedef struct _line Line;

Point input_point()
{
  Point f;
  printf("enter the coordinates as x and y as in (x,y):\n");
  scanf("%f%f",&f.x,&f.y);
  return f;
}

Line input_line(Line s)
{
  
  s.p1=input_point();
  s.p2=input_point();
  return s;
}
void find_length(Line *l,float *distance)
{
  float g,h;
  g=pow((l->p1.x - l->p2.x),2);
  h=pow((l->p1.y - l->p2.y),2);
  *distance=sqrt(g + h);
  // return distance;
}

int main()
{
  Line c;
  float D;
  c=input_line(c);
  find_length(&c,&D);
  printf("the lenght of the given linr is %f",D);
  return 0;
  
  
}
