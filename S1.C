#include<stdio.h>
#include<conio.h>
void call1();
void main()
{
  int v=10;
  clrscr();
  call1();
  printf("\nMainValue is::%d",v);
  getch();
}
void call1()
{
   int v=20;
   printf("\n call1 value is::%d",v);
}
