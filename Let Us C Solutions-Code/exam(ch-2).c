//A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:
//(a) He should get 55 percent or more in A and 45 percent or more in B.
//(b) If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
//(c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
//(d) In all other cases he is declared to have failed.
//
main()
{
int a,b;
printf("Enter the marks obtained in A and B respectively\n");
scanf("%d%d",&a,&b);
if((a>=55&&b>=45)||(a<55&&a>=45&&b>=55))
printf("Your are passed\n");
else if(a>=65&&b<=45)
printf("You have to appear in Re-exam for subject B\n");
else
printf("You are failed,better luck next time\n");
}
