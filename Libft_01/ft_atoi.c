/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:44:37 by rkost             #+#    #+#             */
/*   Updated: 2023/05/16 20:59:36 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str )
{
	unsigned int	ret;
	unsigned int	count;
	int				sign;

	ret = 0;
	count = 0;
	while (str[count] != '\0' && (str[count] == 32
			|| str[count] == '\t' || str[count] == '\n'
			|| str[count] == '\r' || str[count] == '\v'
			|| str[count] == '\f' || str[count] == '+'))
		count++;
	if (str[count] != '\0' && str[count] == '-')
	{
		sign = 1;
		count++;
	}
	while (str[count] != '\0' && ft_isdigit(str[count]))
		ret = (ret * 10) + (str[count++] - '0');
	if (sign == 1)
		return (ret * -1);
	return (ret);
}
