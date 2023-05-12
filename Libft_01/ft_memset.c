
#include "libft.h"

void *ft_memset(void *str, int ch, size_t n)
{
    size_t count;
    unsigned char *mem;

    count = 0;
    mem = (unsigned char *)str;
    if (n <= 0 || (!mem))
        return (0);
    while (count < n)
    {
        mem[count] = ch;
        count++;
    }
    return (mem);
}