#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;

}
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    printf("Factorial is = %d\n\n",fact(n));
    return 0;
}
