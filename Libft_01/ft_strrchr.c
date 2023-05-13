#include "libft.h"

const char 	*ft_strrchr(const char *str, int ch)
{
    unsigned int count;
    char *mem;

    count = ft_strlen(str) - 1;
    while(count != 0)
    {
        if (str[count] == ch)
        {
            mem = (char *)str + count;
            return (mem);
        }
        count--;
    }
	return (0);
}