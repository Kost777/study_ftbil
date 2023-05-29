#include "libft.h"


void    ft_printseperater(char *arg)
{
    printf("\n---------------------------------------\n");
    printf("Test:\t %s", arg);
    printf("\n---------------------------------------\n");
}

void    ft_printseperater_part(char *arg)
{
    printf("\n\n------------------------------------------------------------------------\n");
    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s", arg, arg, arg, arg, arg, arg, arg, arg);
    printf("\n------------------------------------------------------------------------\n");
}

char ft_test_strmapi(unsigned int i, char ch)
{
  char ret = (int)ch + i;
  return (ret);
}

void ft_test_striteri(unsigned int i, char *ch)
{
  *ch = *ch + i;
}

int main(void)
{

ft_printseperater_part("PART 1");
//ft_isalpha
/*
  ft_printseperater("ft_isalpha");
  char ch_isalpha1 = 'r';
  char ch_isalpha2 = '7';
  printf("Test: %c |%d| \n", ch_isalpha1, ft_isalpha(ch_isalpha1));
  printf("Test: %c |%d| \n", ch_isalpha2, ft_isalpha(ch_isalpha2));
*/
//ft_isdigit
/*
  ft_printseperater("ft_isdigit");
  char ch_isdigit1 = 'r';
  char ch_isdigit2 = '7';
  printf("Test: %c |%d| \n", ch_isdigit1, ft_isdigit(ch_isdigit1));
  printf("Test: %c |%d| \n", ch_isdigit2, ft_isdigit(ch_isdigit2));
*/
//ft_isalnum
/*
  ft_printseperater("ft_isalnum");
  char ch_isalnum1 = 'r';
  char ch_isalnum2 = '7';
  char ch_isalnum3 = '@';
  printf("Test: %c |%d| \n", ch_isalnum1, ft_isalnum(ch_isalnum1));
  printf("Test: %c |%d| \n", ch_isalnum2, ft_isalnum(ch_isalnum2));
  printf("Test: %c |%d| \n", ch_isalnum3, ft_isalnum(ch_isalnum3));
*/
//ft_print
/*
  ft_printseperater("ft_isprint");
  char ch_isprint1 = 'r';
  char ch_isprint2 = '\n';
  printf("Test: %c |%d| \n", ch_isprint1, ft_isprint(ch_isprint1));
  printf("Test: %c |%d| \n", ch_isprint2, ft_isprint(ch_isprint2));
*/
//ft_isascii
/*
  ft_printseperater("ft_isascii");
  char ch_isascii1 = 'r';
  char ch_isascii2 = '\xE9';
  printf("Test: %c |%d| \n", ch_isascii1, ft_isascii(ch_isascii1));
  printf("Test: %cé |%d| \n", ch_isascii2, ft_isascii(ch_isascii2));
*/
//ft_strlen
/*
  ft_printseperater("ft_strlen");
  char str_strlen[] = "42Berlin";
  printf("Test: \"42Berlin\" |%zu| \n", str_strlen, ft_strlen(str_strlen));
*/
//ft_memset
/*
  ft_printseperater("ft_memset");
  char str_memset[] = "42Berlin";
  char *str_memset_orginal = ft_strdup(str_memset);
  char ch_memset = '$';
  int int_memset = 3;
  ft_memset(str_memset, ch_memset, int_memset);
  printf("Test: \"%s\"; char:  \"%c\"; size: \"%i\";  Result: |%s| \n", str_memset_orginal, ch_memset, int_memset, str_memset);
  free(str_memset_orginal);
*/
//ft_bzero
/*
  ft_printseperater("ft_bzero");
  char str_bzero[] = "42Berlin";
  char *str_bzero_orginal = ft_strdup(str_bzero);
  int int_bzero = 3;
  ft_bzero(str_bzero, int_bzero);
  printf("Test: \"%s\";  size: \"%d\"  Result: |%s| \n", str_bzero_orginal, int_bzero, str_bzero + int_bzero);
  free(str_bzero_orginal);
*/
//ft_memcpy
/*
  ft_printseperater("ft_memcpy");
	const char src_memcpy[] = "42Berlin_Germany";
 	char dest_memcpy[] = "EVALUATION!!";
  char *dest_memcpy_orginal = ft_strdup(dest_memcpy);
 	int int_memcpy = 3;
  ft_memcpy(dest_memcpy, src_memcpy, int_memcpy);
  printf("Test: \"%s\"; src:\"%s\" size: \"%d\" Result: |%s| \n", dest_memcpy_orginal, src_memcpy, int_memcpy, dest_memcpy);
  free(dest_memcpy_orginal);
*/
//ft_memmove
/*
  ft_printseperater("ft_memmove");
 	const char src_memmove[] = "42Berlin_Germany";
 	char dest_memmove[] = "EVALUATION!!";
  char *dest_memmove_orginal = ft_strdup(dest_memmove);
  int int_memmove = 4;
 	ft_memmove(dest_memmove, src_memmove, int_memmove);
  printf("Test: \"%s\"; src:\"%s\" size: \"%d\"  |%s| \n", dest_memmove_orginal, src_memmove, int_memmove, dest_memmove);
  free(dest_memmove_orginal);
*/
//ft_strcpy
/*
  ft_printseperater("ft_strlcpy");
  const char src_strlcpy[] = "42Berlin_Germany";
  char dest_strlcpy[] = "EVALUATION!!";
  char *dest_strlcpy_orginal = ft_strdup(dest_strlcpy);
  int int_strlcpy = 4;
  ft_strlcpy(dest_strlcpy, src_strlcpy, int_strlcpy);
  printf("Test: \"%s\"; src:\"%s\" size: \"%d\" Result: |%s| \n", dest_strlcpy_orginal, src_strlcpy, int_strlcpy, dest_strlcpy);
  free(dest_strlcpy_orginal);
*/
//ft_strcat
/*
  ft_printseperater("ft_strlcat");
  const char src_strlcat[] = "42Berlin_Germany";
  char dest_strlcat[] = "EVALUATION!!";
  char *dest_strlcat_orginal = ft_strdup(dest_strlcat);
  int int_strlcat = 17;
  ft_strlcat(dest_strlcat, src_strlcat, 17);
  printf("Test: \"%s\"; src:\"%s\" size: \"%d\" Result |%s| \n", dest_strlcat_orginal, src_strlcat, int_strlcat, dest_strlcat);
  free(dest_strlcat_orginal);
*/
//ft_tolower
/*
  ft_printseperater("ft_tolower");
  char ch_tolower1 = 'E';
  char ch_tolower2 = '&';
  printf("Test: \"%c\" |%c|\n", ch_tolower1,ft_tolower(ch_tolower1));
  printf("Test: \"%c\" |%c|\n", ch_tolower2,ft_tolower(ch_tolower2));
*/
//ft_toupper
/*
  ft_printseperater("ft_toupper");
  char ch_toupper1 = '&';
  char ch_toupper2 = 'e';
  printf("Test: \"%c\" |%c|\n", ch_toupper1, ft_toupper(ch_toupper1));
  printf("Test: \"%c\" |%c|\n", ch_toupper2, ft_toupper(ch_toupper2));
*/
//ft_strchr
/*
  ft_printseperater("ft_strchr");
  char str_strchr[] = "Test Evaluation";
  char ch_strchr_Test1 = 'a';
  char ch_strchr_Test2 = '.';
  printf("Test: \"%s\"; char: \"%c\" Result: |%s|\n", str_strchr, ch_strchr_Test1, ft_strchr(str_strchr, ch_strchr_Test1));
  printf("Test: \"%s\"; char: \"%c\" Result: |%s|\n", str_strchr, ch_strchr_Test2, ft_strchr(str_strchr, ch_strchr_Test2));
*/
//ft_strrchr
/*
  ft_printseperater("ft_strrchr");
  char str_strrchr[] = "Test Evaluation";
  char ch_strrchr_Test1 = 'a';
  char ch_strrchr_Test2 = '.';
  printf("Test: \"%s\"; char: \"%c\" Result: |%s|\n", str_strrchr, ch_strrchr_Test1, ft_strrchr(str_strrchr, ch_strrchr_Test1));
  printf("Test: \"%s\"; char: \"%c\" Result: |%s|\n", str_strrchr, ch_strrchr_Test2, ft_strrchr(str_strrchr, ch_strrchr_Test2));
*/
//ft_strncmp
/*
  ft_printseperater("ft_strncmp");
  char str_strncmp_orginal[] = "ABCDEF";
  char str_strncmp_test1[] = "ABCdef";
  char str_strncmp_test2[] = "ABCDEF";
  int int_strncmp_test1 = 6;
  int int_strncmp_test2 = 6;

  printf("Teststr1: \"%s\": Teststr2: \"%s\"; size: \"%d\" Result: |%d|\n", 
  str_strncmp_orginal, str_strncmp_test1, int_strncmp_test1, ft_strncmp(str_strncmp_orginal, str_strncmp_test1, int_strncmp_test1));
  printf("Teststr1: \"%s\": Teststr2: \"%s\"; size: \"%d\" Result: |%d|\n", 
  str_strncmp_orginal, str_strncmp_test2, int_strncmp_test2, ft_strncmp(str_strncmp_orginal, str_strncmp_test2, int_strncmp_test2));
*/
//ft_memchr
/*
  ft_printseperater("ft_memchr");
  const char str_memchr[] = "Test Evaluation";
  char ch_memchr = 'a';
  int int_memchr = 20;
  const char *ret_memchr = ft_memchr(str_memchr, ch_memchr, int_memchr);
  printf("Test: \"%s\"; char: \"%c\" size: \"%d\" Result: |%s|\n", str_memchr, ch_memchr, int_memchr, ret_memchr);
*/
//ft_memcmp
/*
  ft_printseperater("ft_memcmp");
  const char str_memcmp1[] = "ABCdef";
  const char str_memcmp2[] = "ABCDEF";
  int int_memcmp = 6;
  int ret_memcmp = ft_memcmp(str_memcmp1, str_memcmp2, int_memcmp);
  printf("Test: \"%s\"; char: \"%s\"; size: \"%d\" Result: |%d|\n", str_memcmp1, str_memcmp2, int_memcmp, ret_memcmp);
*/
//ft_strnstr
/*
  ft_printseperater("ft_strnstr");
  const char str_strnstr1[] = "Foo Bar Baz";
  const char str_strnstr2[] = "BA";
  int int_strnstr = 11;
  char *ret_strnstr = ft_strnstr(str_strnstr1, str_strnstr2, int_strnstr);
  printf("Test: \"%s\"; char: \"%s\"; size: \"%d\" Result: |%s|\n", str_strnstr1, str_strnstr2, int_strnstr, ret_strnstr);
*/
//ft_atoi
/*
  ft_printseperater("ft_atoi");
  const char str_atoi[] = "   \n   \t -42";
  printf("Test: \"%s\"; int: \"%d\" \n", str_atoi, ft_atoi(str_atoi));
*/
//ft_calloc
/*
  ft_printseperater("ft_calloc");
  int int_count = 3;
  int *int_calloc = (int *)ft_calloc(int_count , sizeof(int));
  int_calloc[0] = 10;
  int_calloc[1] = 11;
  int_calloc[2] = 12;
  int_calloc[3] = 13;
  printf("Test %d Int: 0:\"%d\"; 1:\"%d\"; 2:\"%d\"; 3:\"%d\";\n ", int_count, int_calloc[0], int_calloc[1], int_calloc[2], int_calloc[3]);
  free(int_calloc);
*/
//ft_strdup
/*
  ft_printseperater("ft_strdup");
  const char str_strdup[] = "Test Evaluation";
  char *str_copy_strdup = ft_strdup(str_strdup);
  printf("Test: \"%s\"; Result: |%s|\n", str_strdup, str_copy_strdup);
  free(str_copy_strdup);
*/

ft_printseperater_part("PART 2");
//ft_substr
/*
  ft_printseperater("ft_substr");
  const char str_substr[] = "Save the World";
  int int_substr_start = 5;
  int int_substr_len = 3;
  char *str_goal_substr = ft_substr(str_substr, int_substr_start, int_substr_len);
  printf("Test: \"%s\"; Sart:\"%d\"; len:\"%d\"; Result: |%s|\n", str_substr, int_substr_start, int_substr_len, str_goal_substr);
  free(str_goal_substr);
*/
//ft_strjoin
/*
  ft_printseperater("ft_strjoin");
  const char s1_strjoin[] = "Save";
  const char s2_strjoin[] = " the World";
  char *str_goal_strjoin = ft_strjoin(s1_strjoin, s2_strjoin);
  printf("Test: s1:\"%s\"; s2:\"%s\"; Result |%s|\n", s1_strjoin, s2_strjoin, str_goal_strjoin );
  free(str_goal_strjoin);
*/
//ft_strtrim
/*
  ft_printseperater("ft_strtrim");
  const char s1_strtrim[] = "Save the Word";
  const char set_strtrim[] = "e rd";
  char *goal_strtrim = ft_strtrim(s1_strtrim,set_strtrim);
  printf("Test: s1:\"%s\"; set:\"%s\"; Result |%s|\n", s1_strtrim, set_strtrim, goal_strtrim );
  free(goal_strtrim);
*/
 //ft_split
/*
  ft_printseperater("ft_split");
  char str_split[] = "Save the Word";
  char ch_split = 'e';
  char **ret_split = ft_split(str_split, ch_split);
  printf("Test: \"%s\" char: \"%c\"\n", str_split, ch_split);
  while (*ret_split != NULL)
  {
    printf("|%s|\n", *ret_split);
    ret_split++;
  }
  free(*ret_split);
*/
//ft_itoa
/*
 ft_printseperater("ft_itoa");
  //-2147483648
  //2147483647
  int i_itoa = -10;
  char *ret_itoa = ft_itoa(i_itoa);
  printf("Test: int: %d; char:|%s|\n",i_itoa, ret_itoa);
*/
//ft_strmapi
/*
  ft_printseperater("ft_strmapi");
  char str_strmapi[] = "Das ist ein Test";
  char *ret_strmapi = ft_strmapi(str_strmapi, *ft_test_strmapi);
  printf("Test: Orginal: %s; Result: %s\n", str_strmapi, ret_strmapi);
  free(ret_strmapi);
*/
//ft_striteri
/*
  ft_printseperater("ft_striteri");
  char str_striteri[] = "Das ist ein Test";
  char *str_striteri_orginal = ft_strdup(str_striteri);
  ft_striteri(str_striteri, ft_test_striteri);
  printf("Test: Orginal: %s; Result: %s\n", str_striteri_orginal, str_striteri);
  free(str_striteri_orginal);
*/
//ft_putchar_fd
/*
  ft_printseperater("ft_putchar_fd");
  int file_putchar_fd;
  char filepath_putchar_fd[] = "Test/datei_putchar.txt";
  char ch_putchar_fd = 'T';
  if(access(filepath_putchar_fd, F_OK) != -1)
  {
    file_putchar_fd = open(filepath_putchar_fd, O_WRONLY | O_APPEND ); // Datei öffnen oder erstellen
  }
  else 
  {
    file_putchar_fd = open(filepath_putchar_fd, O_WRONLY | O_CREAT | O_APPEND, 0644); // Datei öffnen oder erstellen
  }
  if (file_putchar_fd == -1) 
  {
    perror("Fehler beim Öffnen der Datei");
    return 1;
  }
  ft_putchar_fd(ch_putchar_fd, file_putchar_fd);

  close(file_putchar_fd);
*/
//ft_putstr_fd
/*
  ft_printseperater("ft_putstr_fd");
  int file_putstr_fd;
  char filepath_putstr_fd[] = "Test/datei_putstr.txt";
  char *ch_putstr_fd = "Das ist ein String";
  if(access(filepath_putstr_fd, F_OK) != -1)
  {
    file_putstr_fd = open(filepath_putstr_fd, O_WRONLY | O_APPEND ); // Datei öffnen oder erstellen
  }
  else 
  {
    file_putstr_fd = open(filepath_putstr_fd, O_WRONLY | O_CREAT | O_APPEND, 0644); // Datei öffnen oder erstellen
  }
  if (file_putstr_fd == -1) 
  {
    perror("Fehler beim Öffnen der Datei");
    return 1;
  }
  ft_putstr_fd(ch_putstr_fd, file_putstr_fd);

  close(file_putstr_fd);
*/
//ft_putendl_fd
/*
  ft_printseperater("ft_putendl_fd");
  int file_putendl_fd;
  char filepath_putendl_fd[] = "Test/datei_putendl.txt";
  char *ch_putendl_fd = "Das ist ein String";
  if(access(filepath_putendl_fd, F_OK) != -1)
  {
    file_putendl_fd = open(filepath_putendl_fd, O_WRONLY | O_APPEND ); // Datei öffnen oder erstellen
  }
  else 
  {
    file_putendl_fd = open(filepath_putendl_fd, O_WRONLY | O_CREAT | O_APPEND, 0644); // Datei öffnen oder erstellen
  }
  if (file_putendl_fd == -1) 
  {
    perror("Fehler beim Öffnen der Datei");
    return 1;
  }
  ft_putendl_fd(ch_putendl_fd, file_putendl_fd);

  close(file_putendl_fd); 
*/
//ft_putnbr_fd
  ft_printseperater("ft_putnbr_fd");
  int file_putnbr_fd;
  char filepath_putnbr_fd[] = "Test/datei_putnbr.txt";
  int int_putnbr_fd = 21111;
  if(access(filepath_putnbr_fd, F_OK) != -1)
    file_putnbr_fd = open(filepath_putnbr_fd, O_WRONLY | O_APPEND ); 
  else 
    file_putnbr_fd = open(filepath_putnbr_fd, O_WRONLY | O_CREAT | O_APPEND, 0644);
  if (file_putnbr_fd == -1) 
  {
    perror("Fehler beim Öffnen der Datei");
    return 1;
  }
  ft_putnbr_fd(int_putnbr_fd, file_putnbr_fd);

  close(file_putnbr_fd); 
}
