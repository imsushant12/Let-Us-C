#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    int i, n, empno;
    int bpay, age;
    char name[10];
    fptr = fopen("a.txt", "w");
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the employee number : ");
        scanf("%d", &empno);
        printf("\nEnter the name : ");
        scanf("%s", name);
        printf("\nEnter the basic pay, age ");
        scanf("%d %d", &bpay, &age);
        fprintf(fptr, "%d %s %d %d \n", empno,name,bpay,age);
    }
    fclose(fptr);
}
