#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - entry point
 *@b: string to convert
 * Return: converted int
 */

void unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if(!b){
        return 0;
    }

    while(*b)
    {
        if (*b !='0' && *b != '1')
        {
            return 0;
        }
        num <<= 1;
        if (*b == '1'){
            num += 1;
        }
        b++;
    }
    return num;
}