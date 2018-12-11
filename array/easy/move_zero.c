#include <stdio.h>

/*
 * Date: 2018-12-11 Tue 11:23 PM
 * Given an array nums, write a function to move all 0's 
 * to the end of it while maintaining the relative 
 * order of the non-zero elements.
 */
void moveZeros(int* nums, int numsSize) {
    int count = 0, i = 0, j = 0;
    for(; j < numsSize;j++) {
        if (nums[j] != 0) {
            nums[i++] = nums[j];
        }
    }
    while(i < j) {
        nums[i++] = 0;
    }
}

int main(int argc, const char** argv)
{
    int a[5] = {0, 1, 0, 3, 12};
    moveZeros(a, 5);
    return 0;
}

