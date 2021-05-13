#define CAPITAL(x) (x>65&&x<90?1:0)
#define SMALL(x) (x>97&&x<122?1:0)
#define BIG(x,y) (x>y?x:y)
main()
{
    int a,num1,num2;
    char ch;
    printf("Enter a letter\n");
    scanf("%c",&ch);
    if(a=CAPITAL(ch)==1)
        printf("Capital letter");
    else if(a=SMALL(ch)==1)
          printf("Small letter");
    printf("\nEnter two numbers");
    scanf("%d %d",&num1,&num2);
    a=BIG(num1,num2);
    printf("Greater number is %d",a);

}
