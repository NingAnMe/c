//
// Created by NingAnMe on 2018/8/5.
//
#include <stdio.h>

int  atoi(char const s[]);

int main(void)
{
    // atoi
    int result;
    char s[] = "123";
    result = atoi(s);
    printf("%d", result);
}
