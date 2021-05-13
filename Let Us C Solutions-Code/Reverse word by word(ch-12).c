#include "stdio.h"
main()
{
FILE *fs;
char s1[80];
char s2[80];
int i=0,j=0;
fs=fopen("a.txt","r");
if(fs==NULL)
{
printf("cannot open file!");
}
while(fgets(s1,79,fs)!=NULL)
{
while(s1[i]!='\0')
{
s2[j]=s1[i];
if(s1[i]==' ' || s1[i]=='\0')
{
s2[j]='\0';
strrev(s2);
printf("%s ",s2);
j=-1;
}
i++;
j++;
}
s2[j]='\0';
printf("%s",strrev(s2));
}
}
