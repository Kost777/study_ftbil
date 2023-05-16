/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:34:19 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 21:35:43 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ret;
	size_t	size_str;

	size_str = ft_strlen(str);
	ret = (char *)malloc((size_str + 1) * sizeof(char));
	if (!ret)
		return (0);
	ret = ft_memcpy(ret, str, size_str);
	return (ret);
}
