/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:36:31 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 21:39:27 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size_dest)
{
	size_t	count;
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	count = 0;
	while ((count < size_dest) || src[count] == '\0')
	{
		dest[len_dest + count] = src[count];
		count++;
	}
	if (size_dest < (len_src + len_dest))
		dest[size_dest - 1] = '\0';
	else if (size_dest != 0)
		dest[len_dest + count] = '\0';
	return (len_src + len_dest);
}
