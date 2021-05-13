main()
{
    int n,x,r,count=0,sum=0;
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        x=x/10;
        count++;
        sum=sum+r;
    }
    printf("Sum of digits = %d and number of digits = %d",sum,count);
}
