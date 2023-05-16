/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:04:55 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 22:09:27 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count_ret;
	size_t	count_s1;
	char	*mem;

	mem = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!mem)
		return (0);
	count_s1 = 0;
	count_ret = 0;
	while (s1[count_s1] != '\0')
	{
		if (!(ft_ischar(s1[count_s1], set)))
		{
			mem[count_ret] = s1[count_s1];
			count_ret++;
		}
		count_s1++;
	}
	return (mem);
}
