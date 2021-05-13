main()
{
char s[100];
int i=0,n,pos;
printf("enter the string: \n\n");
gets(s);
printf("\n\nenter the position to extract from: ");
scanf("%d",&pos);
printf("\nenter the number of characters to extract: ");
scanf("%d",&n);
printf("\n\n\nExtracted string: \n\n");
while(s[i]!='\0')
{
if(i>=pos-1 && i<=pos-1+(n-1))
{
printf("%c",s[i]);
}
i++;
}
}
