/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:27:26 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 21:28:35 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *str, int ch)
{
	unsigned int	count;
	char			*mem;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == ch)
		{
			mem = (char *)str + count;
			return (mem);
		}
		count++;
	}
	return (0);
}
