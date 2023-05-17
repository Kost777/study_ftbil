/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:32:27 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 21:33:37 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count;
	size_t	s1_len;
	size_t	s2_len;
	char	*ret;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if ((!s1 && !s2) || (s1_len == 0 && s2_len == 0))
		return (0);
	ret = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	ret = ft_memmove(ret, s1, s1_len);
	count = 0;
	while (s2[count] != '\0')
	{
		ret[s1_len + count] = s2[count];
		count++;
	}
	ret[s1_len + count] = '\0';
	return (ret);
}
