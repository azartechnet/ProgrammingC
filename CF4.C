#include<stdio.h>
#include<conio.h>
int main()
{
   FILE *fptr;
  fptr=fopen("college2.txt","w");
   fputs("helloworld",fptr);
   fseek(fptr,4,SEEK_SET);
   fputs("Welcome",fptr);
   fclose(fptr);
   return 0;
}