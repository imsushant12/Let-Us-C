main()
{
    char s[]="he is the best";
    int i,len,l,j;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
       if(s[i]=='t'&&s[i+1]=='h'&&s[i+2]=='e')
       {
           for(j=i;j<len;j++)
           {
               s[j]=s[j+4];  //can also  use j+3
           }
           len--;
       }
    }
     printf("%s",s);
}
