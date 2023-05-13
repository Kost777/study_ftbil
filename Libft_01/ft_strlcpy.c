
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size_dest)
{
	size_t	count;
    size_t  len_src;

    len_src = ft_strlen(src);
	count = 0;
	if (!dest)
		return (0);
	while ((count < size_dest) || src[count] == '\0') 
	{
    	dest[count] = src[count];
        count++;
    }
    if (size_dest < len_src)
        dest[size_dest - 1] = '\0';
    else if (size_dest != 0)
        dest[count] = '\0'; 
    return (len_src);
}