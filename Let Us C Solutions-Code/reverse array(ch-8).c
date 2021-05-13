main()
{
	int a[10], b[10], i, j;
	printf("\nEnter 10 Elements : ");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0, j = 9; i<10; i++, j--)
	{
		b[i] = a[j];
	}
	printf("\nArray after Copying in Reverse Order : ");
	for (i = 0; i<10; i++)
	{
		printf("%d ", b[i]);
	}
}
