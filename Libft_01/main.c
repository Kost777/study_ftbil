#include "libft.h"

void    ft_printseperater(char *arg)
{
    printf("\n---------------------------------------\n");
    printf("Test:\t %s", arg);
    printf("\n---------------------------------------\n");
}

int main(void)
{
  ft_printseperater("ft_isalpha");
  printf("Test: r |%d| \n", ft_isalpha('r'));
  printf("Test: 7 |%d| \n", ft_isalpha('7'));

  ft_printseperater("ft_isdigit");
  printf("Test: r |%d| \n", ft_isdigit('r'));
  printf("Test: 7 |%d| \n", ft_isdigit('7'));

  ft_printseperater("ft_isalnum");
  printf("Test: r |%d| \n", ft_isalnum('r'));
  printf("Test: 7 |%d| \n", ft_isalnum('7'));
  printf("Test: @ |%d| \n", ft_isalnum('@'));

  ft_printseperater("ft_isprint");
  printf("Test: r |%d| \n", ft_isprint('r'));
  printf("Test: \\n |%d| \n", ft_isprint('\n'));

  ft_printseperater("ft_isascii");
  printf("Test: r |%d| \n", ft_isascii('r'));
  printf("Test: é |%d| \n", ft_isascii('\xE9'));

  ft_printseperater("ft_strlen");
  printf("Test: \"42Berlin\" |%zu| \n", ft_strlen("42Berlin"));

  ft_printseperater("ft_memset");
    char str_memset[] = "42Berlin";
  ft_memset(str_memset, '$', 2);
  printf("Test: \"42Berlin\"; char:  $; size: 2  |%s| \n", str_memset);

  ft_printseperater("ft_bzero");
    char str_bzero[] = "42Berlin";
    ft_bzero(str_bzero, 2);
  printf("Test: \"42Berlin\";  size: 2  |%s| \n", str_bzero + 2);

  ft_printseperater("ft_memcpy");
  	const char src_memcpy[] = "42Berlin_Germany";
   	char dest_memcpy[] = "EVALUATION!!";
  	ft_memcpy(dest_memcpy, src_memcpy, 3);
  printf("Test: \"EVALUATION\"; src:\"42Berlin_Germany\" size: 2  |%s| \n", dest_memcpy);

  ft_printseperater("ft_memmove");
  	const char src_memmove[] = "42Berlin_Germany";
   	char dest_memmove[] = "EVALUATION!!";
  	ft_memmove(dest_memmove, src_memmove, 3);
  printf("Test: \"EVALUATION\"; src:\"42Berlin_Germany\" size: 2  |%s| \n", dest_memmove);
}