#include<stdio.h>
void oddnum(int);
int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    oddnum(n);

}
void oddnum(int n)
{
    printf("\n");
    int i;
    for(i=1;i<=n;i+=2)
    {
       printf("%d ",i);
    }
    return 0;

}
