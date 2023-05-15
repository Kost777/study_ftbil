#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    void    *ret;
    ret = malloc(num * size);
    if (!ret)
        return (NULL);
    ft_bzero (ret, num);
    return (ret);
}