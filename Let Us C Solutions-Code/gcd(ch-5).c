
main()
{
    int j,k,gcd; //j is numerator and k is denominator
    printf("Enter the numbers");
    scanf("%d %d",&j,&k);
    calc_gcd(j,k,&gcd);
    printf("Required result is %d",gcd);
}
void calc_gcd(int numerator,int denominator,int *gcd)
{
    int num,temp;
    if(denominator==0)
    {
        *gcd=numerator;
    }
    else
    {
       num=numerator/denominator;
       temp=numerator-num*denominator;
       while(temp!=0)
       {
         numerator=denominator;
         denominator=temp;
         num=numerator/denominator;
         temp=numerator-num*denominator;
       }
       *gcd=denominator;
    }
}
