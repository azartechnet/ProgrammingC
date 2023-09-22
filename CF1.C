#include<stdio.h>
#include<conio.h>
int main()
{
 int n;
 FILE *fptr;
 clrscr();
 fptr=fopen("college1.txt","w");
 if(fptr==NULL)
 {
    printf("error");
    exit(1);
 }
printf("Enter the n value is::");
scanf("%d",&n);
fprintf(fptr,"%d",n);
return 0;
}