#include "libft.h"
char *ft_giveStrPart(const char *s, char c)
{
    size_t len_to_delimiter;
    size_t count;
    char *mem;

    len_to_delimiter = 0;
    while (s[len_to_delimiter] && s[len_to_delimiter] != c)
        len_to_delimiter++;
    mem = (char *)malloc((len_to_delimiter + 1) * sizeof(char));
    count = 0;
    while (count < len_to_delimiter)
    {
        mem[count] = s[count];
        count++;
    }
    mem[count] = '\0';
    return (mem);
}




char *ftft_giveStrPart(char const *s, char c)
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
    mem[count] = '\0';
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
    //free(mem);
    return(ret);
}

char *ft_find_delimiter(const char *s, char c)
{
    while (*s != '\0' && *s != c)
        s++;
    return (char *)s;
}

char **ft_split(const char *s, char c)
{
    char **ret;
    char *mem;
    size_t count_Arry;
    size_t count_Part;

    mem = ft_strdup(s);
    count_Part = ft_count_Word(mem, c);
    if (count_Part > 0)
        ret = (char **)malloc((count_Part + 1) * sizeof(char *));
    else
        return (0);

    count_Arry = 0;
    while (*mem != '\0')
    {
        if (*mem == c)
        {
            ret[count_Arry] = ft_giveStrPart(s, c);
            mem++;
            count_Arry++;
        }
        mem++;
    }
    ret[count_Arry] = ft_strdup(s);
    return (ret);
}


char **ftft_split(char const *s, char c)
{
    char **ret;
    char *mem;
    size_t count;
    size_t count_Arry;
    size_t count_Part;

    mem = ft_strdup(s);
    count_Part = ft_count_Word(mem, c);
    if (count_Part > 0)
        ret = (char **)malloc((count_Part + 1) * sizeof(char*));
    else
        return (0);

    count = 0;
    count_Arry = 0;
    while(s[count] != '\0')
    {
        printf("|%c| -- |%c| -- |%zu| \n", mem[count], c, count);
        if (s[count] == c)
        {
            printf("Gefunden: %s \n", mem);
            printf("count |%lu| -- |%lu|\n",count_Part, count_Arry );
            ret[count_Arry] = ft_giveStrPart(mem, c);
            mem = ft_memchr(mem, c, ft_strlen(mem));
            mem = mem + 1; 
            printf("Gefunden: |%s| -- |%s|\n", ret[count_Arry], mem);
            count_Arry++;
            if (count_Part == count_Arry)
                ret[count_Arry] = ft_strdup(mem);
        }
        count++;
    }
    return (ret);
}
