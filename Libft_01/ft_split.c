#include "libft.h"

static int	char_is_separator(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char *str, char sep)
{
	int	count;
	int	words;

	words = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (char_is_separator(str[count + 1], sep) == 1
				&& char_is_separator(str[count], sep) == 0)
			words++;
		count++;
	}
	return (words);
}

static void	write_word(char *dest, char *from, char sep)
{
	int	count;

	count = 0;
	while (char_is_separator(from[count], sep) == 0)
	{
		dest[count] = from[count];
		count++;
	}
	dest[count] = '\0';
}

static void	*write_split(char **split, char *str, char sep)
{
	int		count;
	int		count_Part;
	int		word;

	word = 0;
	count = 0;
	while (str[count] != '\0')
		if (char_is_separator(str[count], sep) == 1)
			count++;
		else
		{
			count_Part = 0;
			while (char_is_separator(str[count + count_Part], sep) == 0)
				count_Part++;
			if ((split[word] = (char*)malloc(sizeof(char) * (count_Part + 1))) == NULL)
			{
				while (word > 0)
					free(split[--word]);
				return (NULL);
			}
			write_word(split[word], str + count, sep);
			count += count_Part;
			word++;
		}
	return ((void*)1);
}

char		**ft_split(const char *s, char c)
{
	char	**res;
	char	*str;
	int		words;

	if (s == NULL)
		return (NULL);
	str = (char*)s;
	words = count_words(str, c);
	if ((res = (char**)malloc(sizeof(char*) * (words + 1))) == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == NULL)
		return (NULL);
	return (res);
}
