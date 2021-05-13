main()
{
    struct student
   {
  char name[20];
  int rollno;
  int course;
  int year;
   };
   struct student s[450];
   int i,x,p,q;
   printf("No of entries=\n");
   scanf("%d",&x);
   for(i=0;i<x;i++)
   {
       printf("Enter details \n");
       scanf("%s %d %d %d",&s[i].name,&s[i].rollno,&s[i].course,&s[i].year);
   }
   printf("Enter the year to get results\n");
   scanf("%d",&p);
   for(i=0;i<=x;i++)
   {
       if(s[i].year==p)
        printf("%s %d %d %d\n",s[i].name,s[i].rollno,s[i].course,s[i].year);
   }
   printf("Enter the year to get results\n");
   scanf("%d",&q);
   for(i=0;i<=x;i++)
   {
       if(s[i].rollno==q)
        printf("%s %d %d %d\n",s[i].name,s[i].rollno,s[i].course,s[i].year);
   }
}
linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;
}
