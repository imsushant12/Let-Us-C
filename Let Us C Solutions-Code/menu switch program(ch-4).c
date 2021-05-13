main()
{
    int choice;

    while(1)
    {
        printf("1. Factorial \n");
          printf("2. Prime \n");
            printf("3. Even/Odd \n");
             printf("4. Exit \n");
               printf("Enter your choice \n");
                scanf("%d",&choice);
                 int m,j,y=1;
                 int i,n,count=0;
                 int x;
            switch(choice)
            {
            case 1 :

                printf("Enter the no");
                scanf("%d",&m);
                for(j=1;j<=m;j++)
                {
                 y=y*j;
                }
                 printf("%d \n",y);
                 break;

            case 2:

                printf("Enter the number to check prime \n");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                 if(n%i==0)
                  {
                   count++;
                  }
                }
               if(count==2)
                printf("prime number \n");
               else
                printf("Not Prime number \n");
                break;

            case 3:

                  printf("Enter the number \n");
                  scanf("%d",&x);
                  if(x/2*2==x)
                  {
                   printf("Even number \n");
                  }
                  else
                   printf("Odd number \n");
                   break;

            case 4:
                printf("Exit \n");
                break;

            default:
                printf("Wrong choice \n");
                  }
    }
}
