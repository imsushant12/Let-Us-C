main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
