main()
{
    char s[]="abcdeefghiuseavoah";
    int i,count=0,len;
    len=strlen(s);
    for(i=0;i<=len;i++)
    {
       if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'))
       {
          count++;
       }
    }
     printf("No of repetition=%d",count);
}
