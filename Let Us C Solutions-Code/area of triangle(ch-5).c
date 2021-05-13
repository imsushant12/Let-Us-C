
#include<math.h>
double Triangle_Area(float,float,float);
main()
{
    float a,b,c;
    double area;
    printf("Program to calculate Area of Triangle ABC\n");
    printf("Enter side AB: ");
    scanf("%f",&a);
    printf("Enter side AC: ");
    scanf("%f",&c);
    printf("Enter side BC: ");
    scanf("%f",&b);
    area = Triangle_Area(a,b,c);
    printf("Area of triangle ABC = %0.2lf Sq.Unit",area);
}

double Triangle_Area(float x,float y,float z)
{
    double S,A;
    S = (x+y+z)/2;
    A = sqrt(S*(S-x)*(S-y)*(S-z));
    return A;
}
