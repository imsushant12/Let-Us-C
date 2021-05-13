#include "stdio.h"
main()
{
    FILE *fp;
    char ch;
    char another='y';
    struct date
    {
     int d, m, y ;
    } ;
    struct employee
    {
     int code;
     char name[20] ;
     struct date jd ;
     int salary ;
     } ;
     struct employee e;
     fp=fopen("ae.txt","r");
     if(fp==NULL)
     {
         puts("Cannot open file");
     }
     while(fscanf(fp,"%d %s %d %d %d %d",&e.code,e.name,&e.jd.d,&e.jd.m,&e.jd.y,&e.salary)!=EOF)
     {
         printf("\n%d %s %d %d %d %d",e.code,e.name,e.jd.d,e.jd.m,e.jd.y,e.salary);
     }
     fclose(fp);
}
