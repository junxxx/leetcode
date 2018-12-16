#include <stdio.h>

/*
 * Implement function ToLowerCase() that has a string parameter str,
 * and returns the same string in lowercase.
 * Date: 2018-12-16 Sun 08:01 PM
 * Version: 1.0
 *
 */
char* toLowerCase(char* str) {
    char *p = str;
    while(*p != '\0') {
        if (*p >= 'A' && *p <= 'Z') {
            *p = *p + 32;
        }
        *p++;
    }
    return str;
}

int main(int argc, const char** argv)
{
    return 0;
}

