main()
{
    struct date
    {
        int m;
        int d;
        int y;
    };
    struct date d1,d2;
    printf("Enter date\n");
    scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
     printf("Enter 2nd date\n");
    scanf("%d %d %d",&d2.d,&d2.m,&d2.y);
     if((d1.d==d2.d)&&(d1.m==d2.m)&&(d1.y==d2.y))
     {
         printf("Both the dates are same");
     }
     else
        printf("Dates are not same");
}
