#include<stdio.h>
#include<conio.h>
int v=10;//global variable
void call1();
void call2();
void main()
{
 clrscr();
 call1();
 call2();
 printf("\n In Main V=%d",v);
 getch();
}
void call1()
{
  int v=20;//local variable
  printf("In call1 function::V=%d",v);
}
void call2()
{
  printf("In call2 fuction::V=%d",v);
}