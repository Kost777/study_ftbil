#include "libft.h"


void    ft_printseperater(char *arg)
{
    printf("\n---------------------------------------\n");
    printf("Test:\t %s", arg);
    printf("\n---------------------------------------\n");
}

int main(void)
{

  /*


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

  ft_printseperater("ft_memcmp");
  const char str1_memcmp[] = "ABCdef";
  const char str2_memcmp[] = "ABCDEF";
  int ret_memcmp = ft_memcmp(str1_memcmp, str2_memcmp, 6);
  printf("Test: \"%s\"; char: \"%s\"; size: 3 |%d|\n", str1_memcmp, str2_memcmp, ret_memcmp);
  //printf("Test: \"Test Evaluation\"; char: \".\"  |%s|\n", ft_memchr("Test Evaluation", '.', 20));

  ft_printseperater("ft_strnstr");
  const char str1_strnstr[] = "Foo Bar Baz";
  const char str2_strnstr[] = "Baz";
  printf("Test: \"%s\"; char: \"%s\"; size: 11 |%s|\n", str1_strnstr, str2_strnstr, ft_strnstr(str1_strnstr, str2_strnstr, 11));

  ft_printseperater("ft_atoi");
  const char str_atoi[] = "      \t -42";
  printf("Test: \"%s\"; int: \"%d\" \n", str_atoi, ft_atoi(str_atoi));

  ft_printseperater("ft_calloc");
  int *int_calloc;
  int_calloc = (int *)ft_calloc(3 , sizeof(int));
  int_calloc[0] = 10;
  int_calloc[1] = 11;
  int_calloc[2] = 12;
  int_calloc[3] = 13;
  printf("Test 3 Int: 0:\"%d\"; 1:\"%d\"; 2:\"%d\"; 3:\"%d\";\n ", int_calloc[0], int_calloc[1], int_calloc[2], int_calloc[3]);
  free(int_calloc);

  ft_printseperater("ft_strdup");
  const char str_strdup[] = "Test Evaluation";
  char *str_copy_strdup;
  str_copy_strdup = ft_strdup(str_strdup);
  printf("Test: \"%s\";  |%s|\n", str_strdup, str_copy_strdup);
  free(str_copy_strdup);

ft_printseperater("PART_2");
ft_printseperater("PART_2");

  ft_printseperater("ft_substr");
  const char str_substr[] = "Save the World";
  char *str_goal_substr;
  str_goal_substr = ft_substr(str_substr, 5, 60);
  printf("Test: \"%s\"; Sart:6; len:3; Result |%s|\n", str_substr, str_goal_substr);
  free(str_goal_substr);

  ft_printseperater("ft_strjoin");
  const char s1_strjoin[] = "Save";
  const char s2_strjoin[] = " the World";
  char *str_goal_strjoin;
  str_goal_strjoin = ft_strjoin(s1_strjoin, s2_strjoin);
  printf("Test: s1:\"%s\"; s2:\"%s\"; Result |%s|\n", s1_strjoin, s2_strjoin, str_goal_strjoin );
  free(str_goal_strjoin);

  ft_printseperater("ft_strtrim");
  const char s1_strtrim[] = "Save the Word";
  const char set_strtrim[] = "e W";
  char *goal_strtrim;
  goal_strtrim = ft_strtrim(s1_strtrim,set_strtrim);
  printf("Test: s1:\"%s\"; set:\"%s\"; Result |%s|\n", s1_strtrim, set_strtrim, goal_strtrim );
  free(goal_strtrim);

*/

char *str_s1 = "DasDasDasDas";
char *str_strtrim = ft_strtrimm(str_s1, "as");
printf("%lu -- %s\n", strlen(str_strtrim),str_strtrim);
free(str_strtrim);

printf("Das ist ein Test\n");

/*

char	s1_strjoin[] = "tripouille";
char	s2_strjoin[] = "42";
char	*strjoin = ft_strjoin(s1_strjoin, s2_strjoin);
strjoin = ft_strjoin("", "");
printf ("%s", strjoin);

char *str_test_substr = "lorem ipsum dolor sit amet";
char *str_substr_2 = ft_substr(str_test_substr, 1, 3);
printf("|%s| -- |%lu| -- |%s| -- |%lu| \n",str_substr_2,strlen(str_substr_2), str_test_substr, strlen(str_test_substr));


  ft_printseperater("ft_atoi");
  const char str_atoi[] = "e + \"++1\"";
  printf("Test: \"%s\"; int: \"%d\" \n", str_atoi, ft_atoi(("--1")));


  ft_printseperater("ft_strnstr");
  const char str1_strnstr_2[] = "lorem ipsum dolor sit amet";
  const char str2_strnstr_2[] = "dol";
  printf("Test: \"%s\"; char: \"%s\"; size: 16 |%s|\n", str1_strnstr_2, str2_strnstr_2, ft_strnstr(str1_strnstr_2, str2_strnstr_2, 15));

  ft_printseperater("ft_memcmp");
  const char str1_memcmp_2[] = "t\200";
  const char str2_memcmp_2[] = "t\0";
  int ret_memcmp_2 = ft_memcmp(str1_memcmp_2, str2_memcmp_2, 2);
  printf("Test: \"%s\"; char: \"%s\"; size: 3 |%d|\n", str1_memcmp_2, str2_memcmp_2, ret_memcmp_2);

  ft_printseperater("ft_strrchr");
  char str_strrchr[] = "tripouille";
  printf("Teststr1: \"%s\"; search:\"t\" Resoult:\"%s\" ",str_strrchr + strlen(str_strrchr), ft_strrchr(str_strrchr, 0));

 ft_printseperater("ft_memchr");
  const char str_memchr_2[] = {0, 1, 2, 3, 4, 5};
  const char *ret_memchr_2 = ft_memchr(str_memchr_2, 0, 1);
  printf("Test: \"%s\"; char: \"0\" |%s|\n",str_memchr_2, ret_memchr_2);

  ft_printseperater("ft_strlcpy");
  printf("%d", ft_strncmp("test\200", "test\0", 6));

  ft_printseperater("ft_strchr");
  char s[] = "tripouille";
  printf("%s -- %s \n", ft_strchr(s, 0), s + strlen(s));
  printf("%s -- %c -- %s \n", ft_strchr(s, 't' + 256), ('t' + 256), s);

  ft_printseperater("ft_split");
  const char s1_split[] = "Save the Word";
  char c_split = 'e';
  char **goal_split;
  goal_split = ft_split(s1_split,c_split);
printf("Test: s1:\"%s\"; set:\"%c\"; Result \n", s1_split, c_split);
char **temp = goal_split;  // Create a temporary pointer to iterate over the array

while (*temp != NULL) {
    printf("|%s|\n", *temp);
    temp++;
}

// Free the memory allocated by ft_split
temp = goal_split;
while (*temp != NULL) {
    free(*temp);
    temp++;
}
free(goal_split);
  //free(*goal_split);
*/
}