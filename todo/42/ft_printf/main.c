#include "libftprintf.h"

int main(void)
{
    int num = 5;
    int len;

    len = printf("%p\n", num);
    printf("%d", len);
    return (0);
}