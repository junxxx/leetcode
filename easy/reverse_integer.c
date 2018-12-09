#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <inttypes.h>


/**
 * int32_t digit reverse
 * v1. AC
 */
int reverse(int x) {
    int i = 0, bitwise = 0;
    int arr[10];
    int64_t ret = 0;
    while(x) {
        arr[i++] = x % 10;
        x = x /10;
        bitwise++;
    }
    for (int j = 0; j < bitwise; j++) {
        //to do optimize,if overflow then return
        ret += arr[j] * pow(10.0, --i);
    }
    if (ret <= INT_MIN || ret >= INT_MAX)
        return 0;
    else
        return ret;
}

int main(int argc, const char** argv)
{
    printf("%d ", reverse(123));
    printf("%d ", reverse(-423));
    printf("%d ", reverse(-120));
    printf("%d ", reverse(120));
    printf("%d ", reverse(1534236469));
    return 0;
} 
