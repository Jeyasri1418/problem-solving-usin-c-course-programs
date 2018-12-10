#include <stdio.h>
#include <stdlib.h>
long filecount(FILE *);
int main(void)
{
   FILE *fp,*fp1;
   char ch;
   long count;
   fp=fopen("file.txt","w");
   while((ch=getchar())!=EOF)
   {
       putc(ch,fp);
   }
   fclose(fp);
   count=filecount(fp);
   fp=fopen("file.txt","r");
   fp1=fopen("file1.txt","w");
   fseek(fp,-1L,2);
   while(count)
   {
       ch=fgetc(fp);
       fputc(ch,fp1);
       fseek(fp,-2L,1);
       count--;
   }
   fclose(fp);
   fclose(fp1);
   fp1=fopen("file1.txt","r");
   while((ch=getc(fp1))!=EOF)
   {
       printf("%c",ch);
   }
   fclose(fp1);
   return 0;
}
long filecount(FILE *fp)
{
    fseek(fp,-1L,2);
    long lastpos=ftell(fp);
    lastpos++;
    return lastpos;
}

