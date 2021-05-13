#include "stdio.h"
main()
{
 FILE *fp,*ft;
char ch;
fp=fopen("abcd.txt","r");
ft=fopen("abc.txt","w");
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
decrypt(&ch);
fputc(ch,ft);
}
fclose(fp);
fclose(ft);
printf("task completed!");
}
decrypt(char *c)
{
if(*c=='!')
*c='a';
if(*c=='@')
*c='e';
if(*c=='#')
*c='i';
if(*c=='$')
*c='o';
if(*c=='%')
*c='u';
if(*c=='~')
*c=' ';
return *c;
}
