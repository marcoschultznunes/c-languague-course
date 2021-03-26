#include <stdio.h>

int main()
{
    int nums[255]; // To declare without initializing, we need to specify the size

    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 4;
    nums[3] = 8;

    for(int i = 0; i < 4; i++){
        printf("nums[%d] = %d \n", i, nums[i]);
    }

    return 0;
}

/*
    In C we need to perform most array operations manually, or create a new kind of array using
    structs. There is no way to get the array length.
*/
