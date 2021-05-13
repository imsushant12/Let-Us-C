main()
{
    int x,z,sum();
    printf("Enter the number");
    scanf("%d",&x);
    z=sum(x);
    printf("\nSum is %d",z);
}
sum(x)
{

    int r,s=0;
    if(x==0)
        return(0);
     else
    return(x%10+sum(x/10));
}
