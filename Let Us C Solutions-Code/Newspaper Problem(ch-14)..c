main()
{
    int j;
    int e=0,u=0,t=0;
    int s[5];
    printf("Enter the details\n");
    printf("0 Upper class,1 Middle class,2 Lower class\n");
    printf("3 English,4 Hindi,5 Regional Language\n");
    printf("6 Daily,7 Supplement,8 Tabloid\n");
    for(j=0;j<=9;j++)
        {
        printf("Enter your choice\n");
        scanf("%d %d %d",&s[0],&s[1],&s[2]);
        if(s[0]==0)
        {
            u++;
        }
        if(s[1]==3)
        {
            e++;
        }
        if(s[2]==8)
        {
            t++;
        }
    }
    printf("\nUpper=%d,English=%d,Tabloid=%d",u,e,t);
}
