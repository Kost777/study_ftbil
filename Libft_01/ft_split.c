#include "libft.h"

char *ft_giveStrPart(char *s, char c)
{
    size_t len_to_delimiter;
    size_t count;
    char *mem;

    len_to_delimiter = 0;
    while (s[len_to_delimiter] != '\0' && s[len_to_delimiter] != c)
        len_to_delimiter++;
    mem = (char *)malloc((len_to_delimiter + 1) * sizeof(char));
    if (mem == NULL)
        return (NULL);
    count = 0;
    while (count < len_to_delimiter)
    {
        mem[count] = s[count];
        count++;
    }
    mem[count] = '\0';
    //*s = ft_memchr(*s, c, ft_strlen(*s));
   // printf("--> giveStrPart: mem=%s , s;%s <--\n", mem, *s);
    return (mem);
}

int ft_count_Word(char const *s, char c)
{
    size_t count;
    size_t ret;
    
    count = 0;
    ret = 0;
    while(s[count] != '\0')
    {
        if (s[count] == c)
        {
            while (s[count++] == c)
                count++;
            ret++;
        }
        count++;
    }
    if (strlen(s) == count && s[count - 1] == c)
        return (ret);
    return(ret + 1);
}


char **ft_split(const char *s, char c)
{
    char **ret;
    char *mem;
    size_t count_Arry;
    size_t count_Part;
    size_t count;

    mem = ft_strdup(s);
    count_Part = ft_count_Word(mem, c);
    printf("Es gibt %lu Teile \n\n", count_Part);
    //free(mem);
    
    ret = (char **)malloc((count_Part) * sizeof(char *));
    if (ret == NULL)
        return (NULL);

    count_Arry = 0;
    count = 0;
    while (s[count] != '\0')
    {
        if (s[count] == c)
        {   
            while (s[count++] == c)
                count++;
            ret[count_Arry] = ft_giveStrPart(mem + count - 1, c);
            printf("mem: %s -- count: %lu -- countA: %lu -- Part: %s \n", mem, count_Part, count_Arry, ret[count_Arry]);
            count_Arry++;
        }
        if (count_Arry + 1 == count_Part)
            break;
        count++;
    }
    if (ret[count_Arry] == NULL)
    {
           // printf("-- cA: %lu -- cP: %lu -- %c -- %s -- %s\n",count_Arry, count_Part,mem[strlen(mem) - 1] , ret[count_Arry - 1], mem );
            if (mem[strlen(mem) - 1] == c)
                ret[count_Arry] = ft_strtrim(mem + count - 1, &c);
            else
                ret[count_Arry] = ft_strdup(mem + count - 1);
    }
    //free(mem);
    count_Arry++;
    ret[count_Arry] = 0;
    return (ret);
}