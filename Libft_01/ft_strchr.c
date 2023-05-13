#include "libft.h"

const char 	*ft_strchr(const char *str, int ch)
{
    unsigned int count;
    char *mem;

    count = 0;
    while(str[count] != '\0')
    {
        if (str[count] == ch)
        {
            mem = (char *)str + count;
            return (mem);
        }
        count++;
    }
	return (0);
}