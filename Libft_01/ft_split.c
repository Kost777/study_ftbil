#include "libft.h"

char *ft_giveStrPart(char const *s, char c)
{
    size_t len_to_delimeter;
    size_t len_str;
    size_t count;
    char *mem;

    len_str = ft_strlen(s);
    len_to_delimeter = ft_strlen(ft_memchr(s,c,len_str));
    mem = (char *)malloc((len_str - len_to_delimeter + 1) * sizeof(char));
    count = 0;
    while (count < (len_str - len_to_delimeter))
    {
        mem[count] = s[count];
        count++;
    }
    return (mem);
}

int ft_count_Word(char const *s, char c)
{
    char *mem;
    size_t count;
    size_t ret;
    
    count = 0;
    ret = 0;
    mem = ft_strdup(s);
    while(mem[count] != '\0')
    {
        if (mem[count] == c)
        {
            mem = ft_memchr(mem, c, ft_strlen(mem));
            ret++;
        }
        count++;
    }
    free(mem);
    return(ret + 1);
}

char **ft_split(char const *s, char c)
{
    char **ret;
    char *mem;
    size_t count;
    size_t count_Arry;

    mem = ft_strdup(s);
    count = ft_count_Word(mem, c);
    if (count > 0)
        ret = (char **)malloc(count * sizeof(char*));
    else
        return (0);

    count = 0;
    count_Arry = 0;
    while(mem[count] != '\0')
    {
        if (mem[count] == c)
        {
            ret[count_Arry] = ft_giveStrPart(mem, c);
            count_Arry++;
        }
        count++;
    }
    return (ret);
}