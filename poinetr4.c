#include <stdio.h>

int main()
{
    int arr[3][4] = {{1,2,3,4},{5,6,7,8,},{10,11,12,13}};
    int i,j;
    for(i=0; i<3; i++)
    {
        printf("address of %dth array = %p %p\n",i,arr[i],*(arr+i));
        for(j=0; j<4; j++)
        {
            printf("%d %d ",arr[i][j],*(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}