main()
{
    char x;
    scanf("%c",&x);
    if(x>=65&&x<=90)
    {
        printf("capital letter");
    }
     if(x>=97&&x<=122)
    {
        printf("small letter");
    }
     if(x>=48&&x<=57)
    {
        printf("digit");
    }
      if(x>=0&&x<=47||x>=58&&x<=64||x>=91&&x<=96||x>=123&&x<=127)
    {
        printf("special character");
    }
}
