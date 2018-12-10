#include <stdio.h>

/**
 * Date: Mon Dec 10 17:26:30 CST 2018
 * Given a sorted array and a target value, 
 * return the index if the target is found. 
 * If not, return the index where it would be if it were inserted in order.
 * You may assume no duplicates in the array.
 * version: 1.0  Runtime: 0 ms, faster than 100.00% of C online submissions
 *
 */
int searchInsert(int* nums, int numsSize, int target) {
    if (target <= nums[0])
        return 0;
    if (target > nums[numsSize - 1])
        return numsSize;
    int begin = 0, end = numsSize - 1;
    while(begin < end) {
        if (end == begin + 1)
            return end;
        int mid = (begin + end) / 2;
        if (target < nums[mid]) {
            end = mid;
        }
        else if (target > nums[mid]) {
            begin = mid;
        }
        else
            return mid;
    }
    return end;
}

int main(int argc, const char** argv)
{
    int a[4] = {1, 3, 5, 6};
    printf("%d ", searchInsert(a, 4, 2));
    return 0;
}

