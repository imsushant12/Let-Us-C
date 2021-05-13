main()
{
    char fname[20], mname[20], lname[20];
     printf("Enter full name (first middle last): ");
     scanf("%s %s %s", fname, mname, lname);
     printf("Abbreviated name: ");
     printf("%c. %c. %s\n", fname[0], mname[0], lname);
}
