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
  	ft_memmove(dest_memmove, src_memmove, 2);
  printf("Test: \"EVALUATION\"; src:\"42Berlin_Germany\" size: 2  |%s| \n", dest_memmove);

  ft_printseperater("ft_strlcpy");
  	const char src_strlcpy[] = "42Berlin_Germany";
   	char dest_strlcpy[] = "EVALUATION!!";
  	ft_strlcpy(dest_strlcpy, src_strlcpy, 4);
  printf("Test: \"EVALUATION\"; src:\"42Berlin_Germany\" size: 4  |%s| \n", dest_strlcpy);

  ft_printseperater("ft_strlcat");
  	const char src_strlcat[] = "42Berlin_Germany";
   	char dest_strlcat[] = "EVALUATION!!";
  	ft_strlcat(dest_strlcat, src_strlcat, 15);
  printf("Test: \"EVALUATION\"; src:\"42Berlin_Germany\" size: 15  |%s| \n", dest_strlcat);

  ft_printseperater("ft_tolower");
  printf("Test: \"E\" |%c|\n", ft_tolower('E'));
  printf("Test: \"&\" |%c|\n", ft_tolower('&'));

  ft_printseperater("ft_toupper");
  printf("Test: \"e\" |%c|\n", ft_toupper('e'));
  printf("Test: \"&\" |%c|\n", ft_toupper('&'));

  ft_printseperater("ft_strchr");
  printf("Test: \"Test Evaluation\"; char: \"a\" |%s|\n", ft_strchr("Test Evaluation", 'a'));
  printf("Test: \"Test Evaluation\"; char: \".\"  |%s|\n", ft_strchr("Test Evaluation", '.'));

  ft_printseperater("ft_strrchr");
  printf("Test: \"Test Evaluation\"; char: \"a\" |%s|\n", ft_strrchr("Test Evaluation", 'a'));
  printf("Test: \"Test Evaluation\"; char: \".\"  |%s|\n", ft_strrchr("Test Evaluation", '.'));

  ft_printseperater("ft_strncmp");
  printf("Teststr1: \"ABCDEF\": Teststr2: \"abcdef\"; size: 6 |%d|\n", ft_strncmp("ABCDEF", "abcdef", 6));
  printf("Teststr1: \"ABCDEF\": Teststr2: \"ABCDEF\"; size: 7 |%d|\n", ft_strncmp("ABCDEF", "ABCDEF", 7));

  ft_printseperater("ft_memchr");
  const char str_memchr[] = "Test Evaluation";
  const char *ret_memchr = ft_memchr(str_memchr, 'a', 20);
  printf("Test: \"Test Evaluation\"; char: \"a\" |%s|\n", ret_memchr);
  //printf("Test: \"Test Evaluation\"; char: \".\"  |%s|\n", ft_memchr("Test Evaluation", '.', 20));


}