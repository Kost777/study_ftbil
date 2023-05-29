#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t count;
    if (s == NULL)
        return ((void)NULL);
    count = 0;
    while (s[count])
    {
        write(fd, &s[count], 1);
        count++;
    }
    write (fd, "\n", 1);
}

