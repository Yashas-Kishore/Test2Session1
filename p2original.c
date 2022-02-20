#include<stdio.h>
typedef struct _complex
{
float abscissa;
float ordinate;
}Coordinate;

Coordinate input_line(Coordinate c)
{
  printf("enter the coordinates point x and y as in (x,y)\n");
  scanf("%f%f",&c.abscissa,&c.ordinate);
  return c;
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{

}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{

}