#include <stddef.h>

#include <string.h>
#include <bsd/string.h>
#include <stdio.h> 
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


	    return 0;
	}