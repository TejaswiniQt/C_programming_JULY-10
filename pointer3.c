#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p1 = arr;
    int (*ptr) [5] = &arr;
    printf("p1 = %p, ptr = %p\n",p1,ptr);
    printf("*p1 = %d, *ptr = %p\n,",*p1,*ptr);
    printf("sizeof(p1) = %u, sizeof(*p1) = %d\n",sizeof(p1),sizeof(*p1));
    printf("sizeof(ptr) = %u,sizeof(*ptr) = %u\n",sizeof(ptr),sizeof(*ptr));
    return 0;
}