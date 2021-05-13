main()
{
    char s[]="abcdefghisevoh";
    int i,len,l,j;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
       {
           for(j=i;j<len;j++)
           {
               s[j]=s[j+1];
           }
           len--;
       }
    }
     printf("%s",s);
}
