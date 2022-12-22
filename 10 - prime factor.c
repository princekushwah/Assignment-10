#include<stdio.h>
void prime(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    return 0;

}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    prime(n);
}
