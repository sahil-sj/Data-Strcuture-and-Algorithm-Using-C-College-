#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    return 1;

    else
    return n * factorial(n-1);
}
int main()
{
    int n;

    printf("enter no you want to cacluate the factorial\n");
    scanf("%d",&n);

    printf("Factorial of a no is : %d",factorial(n));
}