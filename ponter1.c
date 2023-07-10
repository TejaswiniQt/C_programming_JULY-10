#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int num = 10, *ptr;
  //  arr = arr -1; // error: assignment to expression with array type
  //  arrr++; //error: lvalue required as increment operand
 // arr = &num; //error: assignment to expression with array type
    ptr = arr;
    ptr++;
    ptr = ptr-1;
    ptr = &num;
    return 0;
}