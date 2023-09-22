#include<stdio.h>
#include<conio.h>
void main()
{
 char n[20];
 FILE *fptr;
 clrscr();
 fptr=fopen("college2.txt","a+");
 printf("Enter the String value is::");
 scanf("%s",&n);
 fprintf(fptr,"%s",n);
 getch();
}