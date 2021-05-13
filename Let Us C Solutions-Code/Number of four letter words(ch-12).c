#include "stdio.h"
main()
{
    FILE *fp;
    fp=fopen("a.txt","r");
    int count=0;
    char ss[10];
    int i;
    if(fp==NULL)
    {
        puts("Cannot open file");
    }
    while(fgets(ss,9,fp)!=NULL){
    for(i = 0; ss[i] != '\0';i++)
      {
        if(ss[i]>=65 && ss[i]<=90 || ss[i]>=97 && ss[i]<=122) {

        if(ss[i+1]>=65 && ss[i+1]<=90 || ss[i+1]>=97 && ss[i+1]<=122) {

        if(ss[i+2]>=65 && ss[i+2]<=90 || ss[i+2]>=97 && ss[i+2]<=122) {

        if(ss[i+3]>=65 && ss[i+3]<=90 || ss[i+3]>=97 && ss[i+3]<=122) {

     count++;
        }
        }
        }
        }
      }
    }
   fclose(fp);
    printf("Number of 4 letter words are %d",count);
}
