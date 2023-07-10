#include <stdio.h>
void fun(int a,int b,int *sum, int *sub,int *mul);

int main()
{
    int a=5,b=4,sum,sub,mul;
    fun(a,b,&sum,&sub,&mul);
    printf("Sum=%d, sub=%d, mul=%d\n",sum,sub,mul);
    return 0;
}

void fun(int a,int b,int *sum, int *sub,int *mul)
{
    *sum = a+b;
    *sub = a-b;
    *mul = a*b;
}