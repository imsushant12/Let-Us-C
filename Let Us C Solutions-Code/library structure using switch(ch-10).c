struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     int  no_pages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
          printf("MENU\n");
          printf("PRESS 1.TO ADD BOOK DETAILS.");
          printf("\nPRESS 2.TO DISPLAY BOOK DETAILS.");
          printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\nPRESS 4.TO COUNT NUMBER OF BOOKS.");
          printf("\nPRESS 5.TO EXIT.\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("Add Details of %d Book\n",n);
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("Enter No. of Pages : ");
                         scanf("%d",&b[i].no_pages);
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("Book No.   Book Name\t  Author Name\tNo. of Pages");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n %d\t  %s\t  %s\t  %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].no_pages);
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_author,temp) == 0)
                         {
                              printf("\n%s\n",b[i].b_name);
                         }
                    }
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    break;
               case 5 :
                    exit(0);
          }
     }while(ch != 5);
}
