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

	count = 0;
	//ch = ch % 127;
	printf("%c -- %d\n\n", ch, ch);
	while (str[count] != '\0')
	{
		printf("%c -- %c \n", str[count], ch);
		if (str[count] == ch)
			return(char *)str + count;
		count++;
	}
	if (ch == '\0')
		return ((char *)str + count);
	if (str[count] == ch)
		return ((char *)str + count);
	return (0);
}