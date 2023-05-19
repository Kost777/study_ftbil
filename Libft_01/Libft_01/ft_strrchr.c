/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:00:07 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 22:02:31 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *str, int ch)
{
	unsigned int	count;
	char			*mem;

	count = ft_strlen(str);
	if (ch == '\0')
		return (str + count);
	while (count != 0)
	{
		count--;
		if (str[count] == (char)ch)
		{
			mem = (char *)str + count;
			return (mem);
		}
	}
	return (0);
}
