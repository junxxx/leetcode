#include <stdio.h>
#include <stdlib.h>

/**
 * Date: 2018-12-11 Tue 09:57 PM
 * Given an array A of non-negative integers, 
 * return an array consisting of all the even elements of A, 
 * followed by all the odd elements of A.
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    int head = 0, tail = ASize - 1;
    while (head < tail) {
        if (A[head] % 2 > A[tail] % 2) {
            int tmp = A[head];
            A[head] = A[tail];
            A[tail] = tmp;
        }
        if (A[head] % 2 == 0) head++;
        if (A[tail] % 2 == 1) tail--;
    }
    *returnSize = ASize;
    return A;
}

int main(int argc, const char** argv)
{
    int a[4] = {3, 1, 2, 4};
    int *p = malloc(sizeof(int));
    sortArrayByParity(a, 4, p);
    for (int i = 0; i < *p; i++) {
        printf("%d ", a[i]);
    }
    free(p);
    return 0;
}

