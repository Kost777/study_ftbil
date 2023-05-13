#include "libft.h"

int	ft_tolower(int arg)
{
	if (arg > 64 && arg < 91)
		return (arg + 32);
	return (arg);
}
