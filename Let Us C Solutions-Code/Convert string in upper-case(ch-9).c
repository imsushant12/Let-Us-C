main()
{
    int i;
    char str[]="abcdef";
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
