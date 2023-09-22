#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   FILE *f;
char str[20];
   clrscr();
   f=fopen("program.txt","w");
   //fputs("Hello world",f);
  //fscanf(f,"%d",&a);
   fseek(f,2,SEEK_SET);
   fgets(str,20,f);
   rewind(f);
 // fputs("azar",f);
   fclose(f);
   getch();
}