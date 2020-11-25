#include<stdio.h>
int main()
{
int x,y,z,remainder;
printf("enter the value of x,y and z:");
scanf("%d %d %d", &x,&y,&z);
remainder=y%x;
if (remainder + z < x)
  printf("NO \n");
  
  if (remainder + z >= x)
  printf("YES \n");
  return 0;
  }
