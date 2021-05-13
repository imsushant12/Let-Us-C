#include<stdio.h>
main()
{
    FILE *fp,*ft;
    char ch;
    fp=fopen("a.txt","r");
    ft=fopen("abc.txt","a+");
    while(1)
    {
     ch=fgetc(fp);
    if(ch==EOF)
        break;
    fputc(ch,ft);
    }
    fclose(fp);
    fclose(ft);
}
