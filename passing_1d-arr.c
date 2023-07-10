#include <stdio.h>
void fun(int arr[]);

int main()
{
    int arr[5]={1,2,3,4,5},i;
    fun(arr);
    printf("Inside main:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void fun(int arr[])
{
    int i;
    printf("Inside fun:\n");
    for(i=0; i<5; i++)
    {
        arr[i] = arr[i]+1;
        printf("%d ",arr[i]);
    }
    printf("\n");

}