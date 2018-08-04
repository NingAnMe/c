//
// Created by NingAnMe on 2018/8/4.
//

#include <stdio.h>

void butler(void);

int main(void)
{
    printf("First.\n");
    butler();
    printf("Two.\n");

    return 0;
}

void butler(void)
{
    printf("butler\n");
}

