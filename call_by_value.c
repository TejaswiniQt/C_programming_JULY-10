#include<stdio.h>
void fun(int a,int b);

int main()
{
    int a=10, b=20;
    printf("a=%d,b=%d\n",a,b);
    fun(a,b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

void fun(int a,int b)
{
    a++;
    b++;
    printf("a=%d,b=%d\n",a,b);
}