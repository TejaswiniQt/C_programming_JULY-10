#include <stdio.h>

int main()
{
    int arr[2][3][2] = {
                            {
                                {1,2},
                                {3,4},
                                {5,6},
                           },
                           {
                            {7,8,},
                            {10,11},
                            {12,13},
                            }
                        };  
    int i,j,k;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<2; k++)
                printf("%d\t",*(*(*(arr+i)+j)+k));
                printf("\n");
        }
    }
    return 0;
}