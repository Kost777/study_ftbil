#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg > 96 && arg < 123)
		return (arg - 32);
	return (arg);
}