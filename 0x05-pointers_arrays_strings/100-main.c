#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int ni;

    ni = _atoi("98");
    printf("%d\n", ni);
    ni = _atoi("-402");
    printf("%d\n", ni);
    ni = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", ni);
    ni = _atoi("214748364");
    printf("%d\n", ni);
    ni = _atoi("0");
    printf("%d\n", ni);
    ni = _atoi("Suite 402");
    printf("%d\n", ni);
    ni = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", ni);
    ni = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", ni);
    return (0);
}
