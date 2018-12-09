#include <stdio.h>
#include <stdbool.h>

/**
 * Date: 2018-12-09 Sun 09:13 PM
 * Determine whether an integer is a palindrome. 
 * An integer is a palindrome when it reads the same backward as forward.
 */
bool isPalindrome(int x) {
    if (x < 0 )
        return false;
    if (0 <= x && x < 10)
        return true;
    int i = 0, len = 0, arr[10];
    while(x) {
        arr[i++] = x % 10;
        x /= 10;
        len++;
    }
    for(int j = 0; j < len / 2; j++) {
        if(arr[j] != arr[--i])    
           return false;
    }
    return true;
}

int main(int argc, const char** argv)
{
    printf("%d\n",isPalindrome(10));
    printf("%d\n",isPalindrome(101));
    printf("%d\n",isPalindrome(1221));
    printf("%d\n",isPalindrome(-1221));
    printf("%d\n",isPalindrome(1000030001));
    return 0;
}

