//
// Created by NingAnMe on 2018/8/5.
//

#include <ctype.h>

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
