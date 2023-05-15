#include <stddef.h>

#include <string.h>
#include <bsd/string.h>
#include <stdio.h> 

int ft_memcmp(const void *str1, const void *str2, size_t size_cmp)
{
    size_t count;
    const char *mem_str1;
    const char *mem_str2;

    mem_str1 = (char *)str1;
    mem_str2 = (char *)str2;
    count = 0;

    while (mem_str1[count] != '\0' && mem_str2[count] != '\0' && 
    count < size_cmp )
    {
		printf("\n %lu  %c   %c \n", count, mem_str1[count], mem_str2[count]);
        if (mem_str1[count] == mem_str2[count])
            count++;
        else if (mem_str1[count] != mem_str2[count])
            return (((int) mem_str1[count]) - ((int) mem_str2[count]));
    }
    return (0);
}


int main() {


  	const char src_memcpy[50] = "42Berlin";
   	char dest_memcpy[50] = "EVALUATION!!";
  	memcpy(dest_memcpy, src_memcpy, 4);
	printf("Test: \"42Berlin\"; src:\"EVALUATION\" size: 2  |%s| \n", dest_memcpy);
	printf("\n\n\n");
	char dest_strlcpy[] = "Test";
	size_t count;
	printf("%s \n", dest_strlcpy);
	count = strlcpy(dest_strlcpy, "MichTesten", 20);
	printf("\n %s  %zu",  dest_strlcpy, count);

	printf("\n\n\n");
	char dest_strlcat[] = "Test";
	size_t c;
	printf("%s \n", dest_strlcat);
	c = strlcat(dest_strlcat, "MichTesten", 20);
	printf("\n %s  %zu",  dest_strlcat, c);

	printf("\n\n\n");
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = strnstr(largestring, smallstring, 12);
	printf("\n strnstr %s ",  ptr);

	printf("\n\n\n");
const char str1_memcmp[] = "ABCdef";
  const char str2_memcmp[] = "ABCDEF";
  int ret_memcmp = ft_memcmp(str1_memcmp, str2_memcmp, 6);
  printf("Test: \"%s\"; char: \"%s\"; size: 3 |%d|\n", str1_memcmp, str2_memcmp, ret_memcmp);

	    return 0;
	}