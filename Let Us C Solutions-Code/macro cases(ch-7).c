#define AM(a,b)        ((a+b)/2)
#define AV(a)        (a>0)?a:(a*(-1))
#define UtoL(ch)    ((ch>64)&&(ch<91)?(ch+32):0)
#define BIGGER(a,b)    ((a>b)?a:b)
main()
{
    int Choice,num,av,a,b,bigger,x,y;
    float am;
    char ch,lwr;
    printf("1: Arithmetic Mean\n");
    printf("2: Absolute Value\n");
    printf("3: UpperCase to LowerCase\n");
    printf("4: Bigger of 2 numbers\n");
    printf("Enter your choice\n");
    scanf("%d",&Choice);
    switch(Choice)
    {
        case 1:
        printf("Enter 2 numbers \n");
        scanf("%d %d",&a,&b);
        am = AM(a,b);
        printf("\nArithmetic Mean of %d and %d is %f",a,b,am);
        break;
        case 2:
        printf("Enter a numbers: ");
        scanf("%d",&num);
        av=AV(num);
        printf("\nAbsolute value of %d is %d",num,av);
        break;
        case 3:
        printf("Enter an UpperCase alphabet\n");
        scanf(" %c",&ch);
        lwr = UtoL(ch);
        if(lwr)
            printf("\n%c in Uppercase = %c in Lowercase",ch,lwr);
        else
            printf("You did not Enter Uppercase alphabet");
        break;
        case 4:
        printf("Enter 2 numbers\n ");
        scanf("%d %d",&x,&y);
        bigger = BIGGER(x,y);
        printf("\n%dis bigger",bigger);
        break;
    }
}
