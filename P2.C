#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  int *ptr,**pptr;
  ptr=&a;
  pptr=&ptr;
  clrscr();
  printf("Enter the a value is::");
  scanf("%d",&a);
  printf("Your value is::%d",a);
  printf("Your a value addr is:%u",&ptr);
  printf("Your ptr addres is::%u",&pptr);
  getch();
}