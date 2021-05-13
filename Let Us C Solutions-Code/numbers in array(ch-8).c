main()
{
int i,arr[25],tp=0,tn=0,even=0,odd;
printf("Please enter 25 numbers: \n");
for(i=0;i<25;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<25;i++)
{
 if(arr[i]<0)
 {
 tn=tn+1;
 }
 if(arr[i]>0)
 {
 tp=tp+1;
 }
if(arr[i]%2==0)
{
    even=even+1;
}
}
odd=25-even;
printf("Total positive numbers = %d\n",tp);
printf("Total negative numbers = %d\n",tn);
printf("Total even numbers = %d\n",even);
printf("Total odd numbers = %d\n",odd);
}

