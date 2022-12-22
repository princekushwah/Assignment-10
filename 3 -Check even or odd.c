#include<stdio.h>
int check(int);
int main()
{
    int n,pass;
    printf("Enter a number : \n");
    scanf("%d",&n);
    pass = check(n);
    if(pass==1)
       printf("Even");

    else
        printf("Odd ");
    return 0;
}
int check(int n)
{
    return (n%2==0);

}
