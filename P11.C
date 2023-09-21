#include<stdio.h>
#include<conio.h>
void display();
int main()
{
 void *(*ptr)();
 ptr=&display;
 (*ptr)();
 return (0);
}
void display()
{
  printf("Welcome to the function...");
}