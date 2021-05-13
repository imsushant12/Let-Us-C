main()
{
	int a,n,i,arr[10];
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	modify(arr,n);
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
modify(int arr[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        {
        arr[i]=arr[i]*3;
        }
    return(arr[i]);
}
