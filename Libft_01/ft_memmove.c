
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t count;
    char *mem_dest;
    const char *mem_src;
    mem_dest = (char *)dest;
    mem_src = (const char *)src;
    count = 0;
    if (n <= 0 || dest == src)
        return (dest);
    if (mem_src < mem_dest)
    {
        while(n--)
            mem_dest[n] = mem_src[n];
        return (dest);
    }
    while (count < n)
    {
        mem_dest[count] = mem_src[count];
        count++;
    }
    return (dest);
}

