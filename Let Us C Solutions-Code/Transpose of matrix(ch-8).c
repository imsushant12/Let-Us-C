main()
{
int arr[3][3];
int i,j;
printf("Enter the elements of the matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("Transpose matrix is given by\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d ",arr[j][i]);
}
printf("\n");
}
}
