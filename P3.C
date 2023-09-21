#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10;
 int *ptr=NULL;
 //ptr=&a;
 ptr=&a;
 clrscr();
 printf("\nsize of Integer pointer::%d",sizeof(ptr));
 getch();
}