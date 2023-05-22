/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:27:26 by rkost             #+#    #+#             */
/*   Updated: 2023/05/19 12:22:53 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
	int	count;

	if (!str)
		return (NULL);
	count = 0;
	while (str[count])
	{
		if (str[count] == (char)ch)
			return ((char*)(str + count));
		count++;
	}
	if (str[count] == (char)ch)
		return ((char*)(str + count));
	return (NULL);
}