#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   FILE *f;
   clrscr();
   f=fopen("C:\\TC\\BIN\\sum.txt","w");
   fputs("Hello world",f);
  //fscanf(f,"%d",&a);
   fseek(f,6,SEEK_SET);
   fputs("azar",f);
   fclose(f);
   getch();
}