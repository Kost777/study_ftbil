/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:44:50 by rkost             #+#    #+#             */
/*   Updated: 2023/05/17 15:05:10 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size_cmp)
{
	size_t	count;

	count = 0;
	while ((str1[count] != '\0' || str2[count] != '\0')
		&& count < size_cmp)
	{
		if (str1[count] == str2[count])
			count++;
		else
		{
			return ((str1[count]) - (str2[count]));
		}
	}
	return (0);
}
