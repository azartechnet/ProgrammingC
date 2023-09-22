#include<stdio.h>
#include<conio.h>
void call1();
void main()
{

  clrscr();
  for(;;)
  call1();
  getch();
}
void call1()
{
   int static m;
   m++;
   printf("\n m=%d",m);
   if(m==3)
   exit(1);
}