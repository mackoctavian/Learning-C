/**
 * Author: Mack Octavian
 * Project: Learning-C
*/
#include <stdio.h>
#include <string.h>
/**
 * This program is nothing more than a simple 
 * demonstration of the putchar()
*/
int main(void)
{
    char *msg = "C is fun";

    for (int i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]);
    }

    putchar('\n');
    return (0);
}