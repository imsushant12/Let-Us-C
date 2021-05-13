#include "stdio.h"
main()
{
 FILE *fp,*ft;
char ch;
fp=fopen("abc.txt","r");
ft=fopen("abcd.txt","w");
if(fp==NULL)
{
printf("cannot open one of files!");
exit(0);
}
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
encrypt(&ch);
fputc(ch,ft);
}
fclose(fp);
fclose(ft);
printf("task completed!");
}
encrypt(char *c)
{
if(*c=='a')
*c='!';
if(*c=='e')
*c='@';
if(*c=='i')
*c='#';
if(*c=='o')
*c='$';
if(*c=='u')
*c='%';
if(*c==' ')
*c='~';
return *c;
}
