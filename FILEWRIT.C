#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   FILE *fptr;
   clrscr();
   printf("Example:\n");
   fptr=fopen("program.txt","w");
   if(fptr==NULL)
   {
      printf("error:\n");
      exit(1);
   }
   printf("Enter the value:\n");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);
   fclose(fptr);
  // return 0;
   getch();
}