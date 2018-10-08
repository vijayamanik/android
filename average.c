#include<stdio.h>
void main()
{
  int a,b,c,d,e;
  float avg;
  printf("enter five student's marks:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  avg=(a+b+c+d+e)/5;
  printf("average is %f",avg);
}

