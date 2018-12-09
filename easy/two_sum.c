#include <stdio.h>
#include <stdlib.h>
/**
 * Date: 2018-12-09
 * Version: 1.0
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target. 
 * Example:
 *
 * Given nums = [2, 7, 11, 15], target = 9,
 *
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 *
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 *  * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i = 0, j = 1;
    int* ret = malloc(2 * sizeof(int));

    //todo optimize
    while(nums[i] + nums[j] != target || i == j) {
        if (j++ >= numsSize - 1) {
            i++;
            j = 0;
        }
    }
    ret[0] = i;
    ret[1] = j;
    return ret;
}

int main(int argc, const char** argv)
{
    int nums[] = {2,  1, 7, 15}, nums2[] = {3, 2, 4, 6};
    int* ts = twoSum(nums, 4, 9);
    int* ts1 = twoSum(nums2, 4, 6);
    printf("%d %d\n", ts[0], ts[1]);
    printf("%d %d\n", ts1[0], ts1[1]);
    return 0;
} 
