#include <stdio.h>
#include <string.h>

int main()
{
    char *dst = "123465";
    size_t size = 4;
    dst = memmove(dst, dst + 3, size);
    printf("%s", dst);
    return (0);
}