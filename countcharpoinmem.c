#include<stdio.h>
#include<stdlib.h>
int main()
{
  int count=0;
  char *s="C language";
  char *m=(char *)malloc(strlen(s)+1);
  m=s;
  while(*m!='\0')
  {
    if(*m!=' ')
    {
      count++;
    }
    m++;
  }
  printf("\nNo of characters in a line:%d",count);
  if(m)
  free(m);
  return 0;
}

