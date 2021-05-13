
main()
{
    int subjects;
    int class;
    printf("Enter the class");
    scanf("%d",&class);
    printf("Enter no of subjects \n");
    scanf("%d",&subjects);

    switch(class)
    {
    case 1:
        if(subjects>3)
            printf("No grace\n");
        else
            printf("Grace is 5 per subject\n");
    case 2:
        if(subjects>2)
            printf("No grace\n");
        else
            printf("Grace is 4 per subject\n");
    case 3:
        if(subjects>1)
            printf("No grace\n");
        else
            printf("Grace is 5 per subject\n");
    }


}
