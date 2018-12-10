#include <stdio.h>

/**
 * Given a sorted array nums, remove the duplicates in-place such that 
 * each element appear only once and return the new length.
 *
 * Do not allocate extra space for another array, 
 * you must do this by modifying the input array in-place with O(1) extra memory.
 * version: 2.0  faster than 100.00% of C online submissions
 *
 */
int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if(nums[j] != nums[i]) {
            nums[++i] = nums[j];
        }
    }
   return i + 1;
}

void printf_arr(int *arr, int num) {
    for (int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    } 
    printf("\n");
}

int main(int argc, const char** argv)
{
    int a[3] = {1, 1, 1};
    int b[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int l = removeDuplicates(a, 3);
    printf_arr(a, l);
    int bl = removeDuplicates(b, 10);
    printf_arr(b, bl);
    return 0;
} 
