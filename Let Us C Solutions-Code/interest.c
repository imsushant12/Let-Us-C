#include"interest.h"
main()
{
    int p,r,t,a;
    float si;
    printf("Enter the Principle Amount\n");
    scanf("%d",&p);
    printf("Enter the rate of interest(per year)\n");
    scanf("%d",&r);
    printf("Enter the time(in years):  ");
    scanf("%d",&t);
    si=INTEREST(p,r,t);
    a=AMOUNT(p,si);
    printf("\nsimple interest = %f\namount = %d",si,a);
}
