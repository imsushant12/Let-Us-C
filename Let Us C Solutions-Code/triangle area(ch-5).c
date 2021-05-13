#include<math.h>
void calc(float x1,float x2,float x3,float y1,float y2,float y3,float x,float y,int *area,float *flag);
int position(float area,float A,float B,float C);
float distance(float x1,float y1,float x2,float y2);
float calc_area(float a,float b,float c);

main()
{
  float x1,x2,x3,y1,y2,y3,x,y;
  float area=0;
  int flag=0;        //to check the point.
   printf("Enter vertex of A (x1 y1)");
  scanf("%f %f",&x1,&y1);
   printf("\n Enter vertex of B (x2 y2)");
  scanf("%f %f",&x2,&y2);
   printf("\n Enter vertex of C (x3 y3)");
  scanf("%f %f",&x3,&y3);
   printf("\n Enter the point for checking (x y)");
  scanf("%f %f",&x,&y);
  calc(x1,x2,x3,y1,y2,y3,x,y,&area,&flag);
  printf("\n Area is %f",area);

  if(flag)
   printf("\n Point lies inside the triangle");
   else
    printf("\n Point lies outside the triangle");
}

void calc(float x1,float x2,float x3,float y1,float y2,float y3,float x,float y,int *area,float *flag)
{
    float a,b,c;
    float d,e,f;  //to calculate internal triangles side.
    float A,B,C;  //to calculate internal triangles area.
    a=distance(x1,y1,x2,y2);
    b=distance(x2,y2,x3,y3);
    c=distance(x3,y3,x1,y1);
    *area=calc_area(a,b,c);

     d=distance(x1,y1,x,y);
     e=distance(x2,y2,x,y);
     f=distance(x3,y3,x,y);
     A=calc_area(d,a,e);
     B=calc_area(e,b,f);
     C=calc_area(f,c,d);
     *flag=position(*area,A,B,C);    // to check the position we will use all the area and compare them
}
int position(float area,float A,float B,float C)
{
    if(area-(A+B+C)==0||area-(A+B+C)<=0.001)
        return(1);
    else
        return(0);

}
float distance(float x1,float y1,float x2,float y2)
{
    return(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
}
float calc_area(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2.0;
    return(sqrt(s*(s-a)*(s-b)*(s-c)));
}
