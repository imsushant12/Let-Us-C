main()
{
int d,e,f;
printf("\nInput 3 digits to circular shift it(x,y,z)\n");
scanf("%d %d %d",&d,&e,&f);
circs(&d,&e,&f);
printf("\The shifted values are x=%d, y=%d, z=%d",d,e,f);
}
circs(int *x, int *y, int *z)
{
int d,e,f;
d=*z;
e=*x;
f=*y;
*x=d;
*y=e;
*z=f;
}
