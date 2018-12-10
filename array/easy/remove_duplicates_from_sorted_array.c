#include <stdio.h>

/**
 * Given a sorted array nums, remove the duplicates in-place such that 
 * each element appear only once and return the new length.
 *
 * Do not allocate extra space for another array, 
 * you must do this by modifying the input array in-place with O(1) extra memory.
 * version: 1.0  faster than 7.47% of C online submissions
 *
 */
int removeDuplicates(int* nums, int numsSize) {
    int len = numsSize;
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len;j++ ) {
            if(nums[j] == nums[i]) {
                //found same element
                int same = 1;
                for(int shift = j + 1; shift < len;shift++) {
                    if(nums[shift] == nums[i]) {
                        same++;
                    }
                    else
                        break;
                }
                for(int index = j; index < len - same; index++) {
                    nums[index] = nums[index+same];
                }
                len = len - same;
            }
            else
                break;
        }
    }

    return len;
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
