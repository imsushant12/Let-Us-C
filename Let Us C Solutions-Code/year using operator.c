main()
{
    int x;
    scanf("%d",&x);
    if((x%4==0&&x%100==0)||(x%4!=0&&x%100!=0))
    {
        printf("simple year");
    }
    else
        printf("leap year");
}
