main()
{
	int *a,n,i,min,arr[10];
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	a=&arr[0];
    min=*a;
	for(i=1;i<n;i++)
	{
		if(*(a+i)<min)
		{
			min=*(a+i);
		}
	}
	printf("Smallest is %d",min);
}
