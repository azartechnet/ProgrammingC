#include<stdio.h>
#include<conio.h>
void swap(int *i,int *j);
void main()
{
 int num1,num2;
 num1=100;
 num2=200;
 clrscr();
 printf("num1=%d num2=%d\n",num1,num2);
 swap(&num1,&num2);
 printf("num1=%d num2=%d\n",num1,num2);
 getch();
}
void swap(int *i,int *j)
{
  int temp;
  temp=*i;
  *i=*j;
  *j=temp;
}