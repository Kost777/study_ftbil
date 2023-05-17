/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:50:25 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 21:59:29 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *srcstr, const char *search, size_t size_cmp)
{
	size_t	count_src;
	size_t	count_search;
	size_t	size_search;
	char	*ret;

	count_src = 0;
	ret = (char *)srcstr;
	size_search = ft_strlen(search);
	if (size_search == 0 || srcstr == search)
		return (ret);
	while (ret[count_src] != '\0' && count_src < size_cmp)
	{
		count_search = 0;
		while (ret[count_src + count_search] != '\0'
			&& search[count_src] != '\0'
			&& (count_src + count_search) < size_cmp
			&& ret[count_src + count_search] == search[count_search])
		{
			count_search++;
			if (size_search == count_search && search[count_search] == '\0')
				return (ret + count_src);
		}
		count_src++;
	}
	return (0);
}
