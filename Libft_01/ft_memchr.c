#include "libft.h"

void 	*ft_memchr(const void *str, int ch, size_t size_cmp)
{
    size_t count;
    const char *mem;

    count = 0;

    mem = (const char *)str;
    while(mem[count] != '\0' || count > size_cmp)
    {
        if (mem[count] == ch)
            return(void *)str + count;
        count++;
    }
	return (0);
}