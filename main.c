//
// Created by NingAnMe on 2018/8/5.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int  atoi(char const s[]);
void reverse(char s[]);


int main(void)
{
    // atoi
    int result_atoi;
    char s[] = "123";
    result_atoi = atoi(s); // NOLINT
    printf("%d\n", result_atoi);

    // reverse
    int result_reverse;
    char s_reverse[] = "123";
    reverse(s_reverse); // NOLINT
    printf("%s\n", s_reverse);
}

/* atoi: convert s to integer; version 2 */
int atoi(char const s[])
{
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) // NOLINT
        ;

    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++) // NOLINT
    {
        n = 10 * n + (s[i] - '0');
    }
    return sign * n;
}

/* reverse: reverse string s in place */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
