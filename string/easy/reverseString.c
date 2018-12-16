#include <stdio.h>

/*
 * Write a function that takes a string as input 
 * and returns the string reversed.
 * Date: 2018-12-16 Sun 08:19 PM
 * Version: 1.0
 *
 */
char* reverseString(char* s) {
    int i = 0, j = strlen(s) - 1;
    while(i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }

    return s;
}

int main(int argc, const char** argv)
{
    return 0;
}

