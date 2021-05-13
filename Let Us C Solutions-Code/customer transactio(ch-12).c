#include "stdio.h"
#include "conio.h"
main()
{
struct customer
  {
  int accno;
  char name[30];
  float balance;
  }cust;
struct trans
      {
       int accno;
       char trans_type;
       float amount;
       }tra;
FILE *fp,*ft,*ftemp;
int flag=0;
long recsize,retsize;
char another,ch;
fp=fopen("CUSTOMER.txt","rb+");
if(fp==NULL)
{
fp=fopen("CUSTOMER.txt","wb+");
if(fp==NULL)
printf("cannot open customer data file!\n");
}
ft=fopen("TRANSACTIONS.txt","rb+");
if(ft==NULL)
{
ft=fopen("TRANSACTIONS.txt","wb+");
if(ft==NULL)
printf("cannot open transactions file!\n");
}
recsize=sizeof(cust);
retsize=sizeof(tra);
while(1)
{
printf("\t1: Add customer information:\n\n");
printf("\t2: Add transaction information:\n\n");
printf("\t3: Perform transaction:\n\n");
printf("\t0: Exit:\n\n\n");
printf("Your choice: ");
fflush(stdin);
ch=getche();
switch(ch)
{
case '1':
fseek(fp,0,SEEK_END);
another='y';
while(another=='y')
{
printf("\nEnter account number: ");
scanf("%d",&cust.accno);
printf("\n\nEnter name: ");
scanf("%s",cust.name);
printf("\n\nEnter balance: ");
fflush(stdin);
scanf("%f",&cust.balance);
fwrite(&cust,recsize,1,fp);
printf("Add another customer information(Y/N): ");
another=getche();
}
break;
case '2':
fseek(ft,0,SEEK_END);
another='y';
while(another=='y')
{
printf("Enter existing customer account number: ");
scanf("%d",&tra.accno);
printf("\n\nEnter transaction type(D/W): ");
fflush(stdin);
scanf("%c",&tra.trans_type);
printf("\n\nEnter amount for transaction: ");
fflush(stdin);
scanf("%f",&tra.amount);
fwrite(&tra,retsize,1,ft);
printf("Enter another information(Y/N): ");
another=getche();
}
break;
case '3':
printf("\t\tPerform transactions\n");
rewind(fp);
while(fread(&cust,recsize,1,fp)==1)
{
rewind(ft);
while(fread(&tra,retsize,1,ft)==1)
{
if(cust.accno==tra.accno)
{
flag=1;
if(tra.trans_type=='d')
{
cust.balance+=tra.amount;
fseek(fp,-recsize,SEEK_CUR);
fwrite(&cust,recsize,1,fp);
}
else if(tra.trans_type=='w')
{
if((cust.balance-tra.amount)>=100)
{
cust.balance-=tra.amount;
fseek(fp,-recsize,SEEK_CUR);
fwrite(&cust,recsize,1,fp);
}
}
}
}
}
fclose(ft);
ftemp=fopen("TEMP.txt","rb+");
if(ftemp==NULL)
{
ftemp=fopen("TEMP.txt","wb+");
}
remove("TRANSACTIONS.txt");
rename("TEMP.DAT","TRANSACTIONS.txt");
ft=fopen("TRANSACTIONS.DAT","rb+");
if(ft==NULL)
{
ft=fopen("TRANSACTIONS.txt","wb+");
}
printf("Transactions performed seccussfully!\n");
break;
case '0':
fclose(fp);
fclose(ft);
}
}
}
