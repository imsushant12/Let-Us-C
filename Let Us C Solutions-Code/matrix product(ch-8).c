#define m 3
#define n 3
main()
{
int array1[m][n];
int array2[m][n];
int arr[m][n];
int i,j,k,sum=0;
printf("Enter the elements of the 1st Matrix(only 3x3)(please hit Enter after 3 Entries)\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
scanf("%d",&array1[i][j]);
}
printf("Enter the elements of the 2nd Matrix(only 3x3)(please hit Enter after 3 Entries)\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
scanf("%d",&array2[i][j]);
}
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
sum=0;
for(k=0;k<=n-1;k++)
sum=sum+array1[i][k]*array2[k][j];
arr[i][j]=sum;
}
}
printf("Matrix1 X Matrix2 is given by\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
printf("%d ",arr[i][j]);
printf("\n");
}
}

