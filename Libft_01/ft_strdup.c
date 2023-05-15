#include "libft.h"

char *ft_strdup(const char *str)
{
    char    *ret;
    size_t  size_str;
    size_str = ft_strlen(str);
    ret = (char *)malloc((size_str + 1) * sizeof(char));
    if (!ret)
        return (0);
    ret = ft_memcpy(ret, str, size_str);
    return (ret);
}