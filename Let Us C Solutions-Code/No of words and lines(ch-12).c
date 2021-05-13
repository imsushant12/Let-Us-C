#include "stdio.h"
main()
{
    FILE *fp;
    fp=fopen("a.txt","r");
    int count=0, count2=1;
    char s[10];
    int i;
    if(fp==NULL)
    {
        puts("Cannot open file");
    }
    while(fgets(s,9,fp)!=NULL){
    for(i = 0; s[i] != '\0';i++)
      {
        if(s[i]==' ')
        {
            count++;
        }
        else if (s[i]=='\n')
        {
            count2++;
        }
      }

    }
   fclose(fp);
    count=count+count2;
    printf("Number of words is %d\n",count);
         printf("Number of lines is %d",count2);
}
