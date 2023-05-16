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

	count = ft_strlen(str) - 1;
	while (count != 0)
	{
		if (str[count] == ch)
		{
			mem = (char *)str + count;
			return (mem);
		}
		count--;
	}
	return (0);
}
