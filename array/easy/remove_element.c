#include <stdio.h>

/*
 * Date: Mon Dec 10 14:27:29 CST 2018
 * Given an array nums and a value val, 
 * remove all instances of that value in-place and return the new length.
 *
 */
int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            nums[i++] = nums[j];
        }
    }
    return i;
}

int main(int argc, const char** argv)
{
    int a[4] = {3, 2, 3, 2};
    int l = removeElement(a, 4, 2);

    for(int i = 0; i < l; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

