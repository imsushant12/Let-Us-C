main()
{
char h,l,g;
int a;
printf("Enter Health e For Excellent And p For Poor ");
scanf("%c",&h);
printf("Enter Location c For City And v For Village ");
scanf("\n%c",&l);
printf("Enter Gender m For Male And f For Female ");
scanf("\n%c",&g);
printf("Enter Age");
scanf("\n%d",&a);
if((h=='e')&&(l=='c')&&(g=='m')&&(a>=25||a<=35))
printf("\nThe Premium Is Rs.4 Per Thousand And His Policy Cannot Exceed Rs.2 Lakhs");
if((h=='e')&&(l=='c')&&(g=='f')&&(a>=25||a<=35))
printf("\nThe Premium Is Rs.3 Per Thousand And Her Policy Cannot Exceed Rs.1 Lakhs");
if((h=='p')&&(l=='v')&&(g=='m')&&(a>=25||a<=35))
printf("\nThe Premium Is Rs.6 Per Thousand And Cannot Exceed Rs. 10,000");
else
printf("\n not Insured");
}
