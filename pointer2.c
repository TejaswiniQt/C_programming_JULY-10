#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int (*ptr) [5] = arr;
    printf("p = %p, ptr = %p\n",p,ptr);
    p++;
    ptr++;
    printf("*p = %d, *ptr = %p\n",*p,*ptr);
    return 0;
}