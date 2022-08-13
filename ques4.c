#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius of circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of %.2f",a);

    return 0;
}