#include <stdio.h>
#include <stdlib.h>

/**
 * Date: 2018-12-12 Wed 10:56 PM
 * Given an array A of non-negative integers, 
 * half of the integers in A are odd, 
 * and half of the integers are even.
 * Sort the array so that whenever A[i] is odd,
 * i is odd; and whenever A[i] is even, i is even.
 *
 * Version: 1.0 Runtime: 108 ms, 
 * faster than 5.47% of C online submissions for Sort Array By Parity II.
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
    for(int i = 0; i <= ASize -1; i++) {
        if (i % 2 == 0) {
            if (A[i] % 2 != 0) {
                //swap from the end to the left
                for (int j = ASize - 1; j > i; j--) {
                    if ( j % 2 && A[j] % 2 == 0) {
                        int tmp = A[j];
                        A[j] = A[i];
                        A[i] = tmp;
                        break;
                    }
                }
            }
        } else {
            if (A[i] % 2 == 0) {
                //swap from the end to the left
                for (int j = ASize - 1; j > i; j--) {
                    if ( j % 2  == 0 && A[j] % 2) {
                        int tmp = A[j];
                        A[j] = A[i];
                        A[i] = tmp;
                        break;
                    }
                }
            }
        }
    }
    *returnSize = ASize;
    return A;
}

int main(int argc, const char** argv)
{
    int a[6] = {1, 4, 4, 3, 0, 3};
    int *p = malloc(sizeof(int));
    sortArrayByParityII(a, 6, p);
    for(int i = 0; i < *p; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

