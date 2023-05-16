/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:12:28 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 21:19:46 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size_cmp)
{
	size_t		count;
	const char	*mem_str1;
	const char	*mem_str2;

	mem_str1 = (char *)str1;
	mem_str2 = (char *)str2;
	count = 0;
	while (mem_str1[count] != '\0' && mem_str2[count] != '\0'
		&& count < size_cmp)
	{
		if (mem_str1[count] == mem_str2[count])
			count++;
		else if (mem_str1[count] != mem_str2[count])
			return (((int) mem_str1[count]) - ((int) mem_str2[count]));
	}
	return (0);
}
