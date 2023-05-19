/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:03:08 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 22:04:15 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	str_len;
	char	*ret;

	count = 0;
	str_len = ft_strlen(s);
	if (str_len < len + start)
		len = str_len - start + 1;
	if (len <= 0 || start > str_len)
		return (0);
	ret = (char *)malloc(len + 1 * sizeof(char));
	while (count < len)
	{
		ret[count] = s[start + count];
		count++;
	}
	ret[count] = '\0';
	return (ret);
}
