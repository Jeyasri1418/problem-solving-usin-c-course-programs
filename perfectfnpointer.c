#include<stdio.h>
int *perfect(int *n);
int main()
{
  int i,*sum,n;
  printf("Enter n");
  scanf("%d",&n);
  sum=perfect(&n);
  if(n==*sum)
  {
    printf("\nPerfect");
  }
  else if(n>*sum)
  {
    printf("\nDefficient");
  }
  else
  {
    printf("\nAbundant");
  }
  return 0;
}
int *perfect(int *n)
{
  int i;
  int sum;
  for(i=1;sum<*n;i++)
  {
    if(*n%i==0)
        sum=sum+i;
  }
  *n=sum;
  return n;
}
