#include "libft.h"


int	ft_ischar(char ch, char const *set)
{
	size_t	count;

	count = 0;
	while (set[count] != '\0')
	{
		if (set[count] == ch)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrimm(char const *s1, char const *set)
{
	size_t	count_mem;
	size_t	count_s1;
	char	*mem;
	char	*ret;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	mem = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (mem == NULL)
		return (NULL);

	count_s1 = 0;
	count_mem = 0;
	while (s1[count_s1] != '\0')
	{
		if (!(ft_ischar(s1[count_s1], set)))
		{
			mem[count_mem] = s1[count_s1];
			count_mem++;
		}
		count_s1++;
	}
	ret = (char *)malloc((ft_strlen(mem) + 1) * sizeof(char));
	if (ret == NULL)
		return NULL;
	ret = ft_memmove(ret, mem, ft_strlen(mem));
	free(mem);
	return (ret);
}