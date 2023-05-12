#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t count;
    unsigned char *mem;

    count = 0;
    mem = (unsigned char *)s;
    while (count < n)
    {
        mem[count] = '\0';
        count++;
    }
    s = mem;
}