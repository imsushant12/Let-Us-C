main()
{
    int x,pfact();
    scanf("%d",&x);
    pfact(x);
}
pfact(x)
{
    int i;
     for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d \n",i);
            pfact(x/i);
            break;
        }
    }
}

