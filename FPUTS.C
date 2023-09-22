#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char file[20],text[50];
clrscr();
printf("\nEnter the name of file:");
scanf("%s",file);
fp=fopen(file,"w");
if(fp==NULL)
{
printf("\nFile cannot open");
return;
}
else
{
printf("\nEnter Text here :");
scanf("%s",text);
fputs(text,fp);
}
fclose(fp);
}
