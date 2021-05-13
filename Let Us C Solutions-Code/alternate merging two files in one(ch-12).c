#include "stdio.h"
main()
{
   FILE *fp1 = fopen("abc.txt", "r");
   FILE *fp2 = fopen("abcd.txt", "r");
   FILE *fp3 = fopen("a.txt", "w+");
   char c;
   char e;
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
   while(((c=fgetc(fp1)) != EOF) && ((e = fgetc(fp2)) != EOF))
   {
   while ((c = fgetc(fp1)) !='\n')
      fputc(c, fp3);
   while ((e = fgetc(fp2)) != '\n')
      fputc(e, fp3);
   }
   printf("Merged abc.txt and abcd.txt into a.txt");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
}
