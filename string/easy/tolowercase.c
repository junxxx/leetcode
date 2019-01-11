#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1001

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
    if (argc < 2) {
        printf("usage: %s string", argv[0]);
        exit(1);
    }
    char source[MAXLINE]; 
    strcpy(source, argv[1]);
    printf("source string: %s\n", source);
    toLowerCase(source);
    printf("toLowerCase string: %s\n", source);
    return 0;
}

