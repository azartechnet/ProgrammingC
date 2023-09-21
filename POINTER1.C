#include<stdio.h>
#include<conio.h>
void main()
{
  int a,*ptr;
   // a=&ptr;
   ptr=&a;
  clrscr();
  printf("Enter the a value is::");
  scanf("%d",&a);
  printf("Your value is::%d",*ptr);
  getch();
}