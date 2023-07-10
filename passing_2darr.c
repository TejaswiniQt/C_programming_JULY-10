#include <stdio.h>
void fun(int (*arr) [4]);

int main()
{
    int arr[3][4]={
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                  };
    int i,j;
    fun(arr);
    printf("Inside main:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}

void fun(int (*arr) [4])
{
    int i,j;
    printf("Inside fun:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            arr[i][j] = arr[i][j]+1;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}