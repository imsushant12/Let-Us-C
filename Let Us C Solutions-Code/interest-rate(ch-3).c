main()
{
    float p, r, n, q, a;
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter values of p, r, n, q ");
        scanf("%f%f%f%f",&p,&r,&n,&q);
        a=p*pow((1+(r/q)),n*q);
        printf("\nValue of a is %f\n",a);
    }
}
