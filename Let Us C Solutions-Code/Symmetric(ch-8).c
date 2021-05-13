main()
{
int arr1[3][3];
int arr2[3][3];
int i,j,sym=1;
printf("Enter the elements of the matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&arr1[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
 arr2[j][i]=arr1[i][j];
}
}
  for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
 if(arr1[i][j]!=arr2[i][j])
 {
     sym=0;
 }
}
}
 if(sym==1)
    printf("Symmetric");
 else
    printf("Not Symmetric");
}
