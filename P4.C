#include<stdio.h>
#include<conio.h>
void main()
{
 char a='a',*cptr;
 cptr=&a;
 clrscr();
 printf("\n size of character pointer::%d",sizeof(cptr));
 getch();
}