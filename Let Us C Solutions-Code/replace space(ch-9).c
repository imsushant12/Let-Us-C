main()
{
char sent[]="Grim    return   to the planet of apes!!";
int i;
for(i=0;sent[i]!=0;i++)
{
if(sent[i]==32&&sent[i+1]==32)
{
for( ;sent[i+1]!=0;i++)
{
sent[i]=sent[i+1];
}
i=0;
}
}
printf("\n%s",sent);
}
