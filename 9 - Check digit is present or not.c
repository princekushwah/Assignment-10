#include<stdio.h>
int check(int digit,int num)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num=num/10;
    }
        return 0;

}
int main()
{
    int i,j;
    printf("Enter digit and number \n");
    scanf("%d%d",&i,&j);
    if(check(i,j))
        printf("Yes");
    else
        printf("No");
    return 0;
}
