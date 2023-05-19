#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_giveStrPart(const char *s, char c)
{
    size_t len_to_delimiter = strcspn(s, &c);
    char *mem = (char *)malloc((len_to_delimiter + 1) * sizeof(char));
    size_t count = 0;

    while (count < len_to_delimiter)
    {
        mem[count] = s[count];
        count++;
    }
    mem[count] = '\0';  // Add null-terminating character
    return mem;
}

int ft_count_Word(const char *s, char c)
{
    int count = 0;
    int ret = 0;
    const char *mem = s;

    while (*mem != '\0')
    {
        if (*mem == c)
        {
            mem++;
        }
        else
        {
            mem = strchr(mem, c);
            ret++;
        }
    }
    return (ret + 1);
}

char **ft_split(const char *s, char c)
{
    char **ret;
    const char *mem;
    size_t count;
    size_t count_Arry;

    mem = s;
    count = ft_count_Word(mem, c);
    if (count > 0)
        ret = (char **)malloc((count + 1) * sizeof(char *));
    else
        return NULL;

    count = 0;
    count_Arry = 0;
    while (*mem != '\0')
    {
        if (*mem == c)
        {
            mem++;
        }
        else
        {
            ret[count_Arry] = ft_giveStrPart(mem, c);
            mem = strchr(mem, c);
            count_Arry++;
        }
        count++;
    }

    ret[count_Arry] = NULL;  // Add the final null pointer
    return ret;
}

int main()
{
    const char s1_split[] = "Save the Word";
    char c_split = 'e';
    char **goal_split;
    goal_split = ft_split(s1_split, c_split);
    printf("Test: s1:\"%s\"; set:\"%c\"; Result \n", s1_split, c_split);
    char **temp = goal_split;  // Create a temporary pointer to iterate over the array

    while (*temp != NULL) {
        printf("|%s|\n", *temp);
        temp++;
    }

    // Free the memory allocated by ft_split
    temp = goal_split;
    while (*temp != NULL) {
        free(*temp);
        temp++;
    }
    free(goal_split);

    return 0;
}
