#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[5],b[5];
  int *p,*q;
  p=(int *)calloc(2,5);
  q=(int *)calloc(2,2);
  p=&a[0];
  q=&b[0];
  printf("\nEnter array elements");
  for(p=a;p<a+5;p++)
  {
    scanf("%d",p);
  }
  q=realloc(q,5);
  for(p=a+4,q=b;q<b+5,p>=a;p--,q++)
      {
        *q=*p;
      }
   for(q=b;q<b+5;q++)
      {

        printf("%d\n",*q);
      }
   free(p);
   free(q);
  return 0;
  }
