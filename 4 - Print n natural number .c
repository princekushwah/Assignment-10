#include<stdio.h>
void num(int);
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    num(n);
}
void num(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
