main()
{
    char days;
    printf("Type a for 1-5 days, b for 6-10 days, c for above 10 days and d for above 30 days \n");
    scanf("%c",&days);
    if(days=='a')
    {
        printf("Fine is 50 paise");
    }
    if(days=='b')
    {
        printf("Fine is 1 rupee");
    }
    if(days=='c'&&days!='d')
    {
        printf("Fine is 5 rupee");
    }
    else
        printf("Membership is canceled");
}
