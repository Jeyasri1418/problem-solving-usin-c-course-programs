#include<stdio.h>
int main()
{
  int a[2][2]={1,1,1,1},b[2][2]={1,1,1,1},c[2][2],s=0,t=0;
  int *p,*q,*r;
  int i,j,k;
  p=a,q=b,r=c;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<3;k++)
      {
        printf("%d",*(p+i)+k);
        printf("%d",*(q+k)+j);
        t=s + (*(*(p+i))+k);
        s=t * (*(*(q+k))+j));
        printf("%d",s);
      }
    }
    *(*(r+i)+j)=s;
    s=0;
  }
  printf("\n The multiplied matrix is:\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  {
    printf("%d\t",*(*(r+i)+j));
  }
    printf("\n");
  }
  return 0;
}
