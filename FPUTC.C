#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char c;
clrscr();
fp=fopen("lines.txt","w");
if(fp==NULL)
return;
else
{
while((c=getche())!='*')
fputc(c,fp);
}
fclose(fp);
}
