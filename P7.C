#include<stdio.h>
#include<conio.h>
void main(){
int *a,*b,c,d;
clrscr();
printf("enter the first value:");
scanf("%d",&c);
printf("enter the second value:");
scanf("%d",&d);
a=&c;
b=&d;
printf("addtion:%d\n",*a+*b);
printf("subtraction:%d\n",*a-*b);
getch();
}