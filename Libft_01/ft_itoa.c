# include "libft.h"

/*
int countdigt(int n)
{
    int count;
    
    count = 1;
    while ((n / 10) != 0)
    {
        n = n / 10;
        //printf ("%d  \n",n);
        count++;
    }
    return (count);
}

char setCahr (int n)
{
    while ((n / 10) != 0)
        n = n / 10;
    return n;
}

char *ft_itoa(int n)
{
    int len;
    char *ret;
    
    if (n == -2147483648)
        return("-2147483648");
    if (n == 0)
        return("0");
    
    len = countdigt(n);
    if (n < -2147483647 || n > 2147483647)
        return (NULL);
    if (n < 0)
        len++;
    if ((ret = (char *)malloc((len + 1) * 1)) == NULL)
        return (NULL);
    if (n < 0)
    {
        n *= -1;
        ret[0] = '-';
        printf("%d" , n);
    }
    ret[len] = '\0';
    while ((n / 10) != 0)
    {
        len--;
        ret[len] = (n % 10) + '0';
        n /= 10;
    //    printf (" len %d -- n %d \n" , len, n);
    }
    len--;
    ret[len] = (n % 10) + '0';
  //  printf("Modul n: %d ist %d -- %s \n", n, len, ret);    
    return (ret);
}
*/


static int	ft_nbrlen(long n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr_stock(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnbr_stock(n / 10, str, i);
		ft_putnbr_stock(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	if ((str = malloc(sizeof(char) * (ft_nbrlen(nbr) + 1))) == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	ft_putnbr_stock(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
