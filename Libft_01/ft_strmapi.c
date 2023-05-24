# include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
char *ret;
size_t count;

if (!s || !f)
    return (NULL);
if (!(ret = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
    return (NULL);
count = 0;
while(s[count] != '\0')
{
    ret[count] = f(count, s[count]);
    count++;
}
ret[count] = '\0';
return (ret);
}