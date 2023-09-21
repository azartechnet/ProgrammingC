#include<stdio.h>
#include<conio.h>
void main()
{
  int *a[10];
  int a1[10],i,n;
  clrscr();
  printf("Enter the n value::");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("Enter the array value is::");
     scanf("%d",&a1[i]);
     a[i]=&a1[i];
  }
  for(i=0;i<n;i++)
  {
    printf("The valueis::%d\n",*a[i]);
    printf("%u\n",&a1[i]);
  }
  getch();
}