#include<stdio.h>
float area(float);
int main()
{
    int r;
    float circul;
    printf("Enter a radius: \n");
    scanf("%d",&r);
    circul =area(r);
    printf("Area of circul = %f",circul);
    return 0;
}
float area(float radius)
{
    float c;
    c = 3.14*radius*radius;
    return c;
}
