#include<stdio.h>
float simpleinterest(float,float,float);
int main()
{
    float p,r,t,sim;
    printf("Enter principle rate and time ");
    scanf("%f%f%f",&p,&r,&t);
    sim=simpleinterest(p,r,t);
    printf("Simple interest is = %f",sim);
    return 0;
}
float simpleinterest(float p,float r,float t)
{
    float s = (p*r*t)/100;
    return s;
}
