#include<stdio.h>
void bintohex(void);
void  main()
{
  bintohex();
}
void bintohex()
{
  long bin,r,i=1;
  int hd=0;
  printf("\nEnter the binary number");
  scanf("%ld",&bin);
  while(bin!=0)
  {
    r=bin%10;
    hd=hd+r*i;
    i=i*2;
    bin=bin/10;
  }
  printf("\n The equivalent binary value is:%x",hd);

}
