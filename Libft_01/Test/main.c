#include <stddef.h>

#include <string.h>
#include <stdio.h> 
	int main() {


  	const char src_memcpy[50] = "42Berlin";
   	char dest_memcpy[50] = "EVALUATION!!";
  	memcpy(dest_memcpy, src_memcpy, 4);
		printf("Test: \"42Berlin\"; src:\"EVALUATION\" size: 2  |%s| \n", dest_memcpy);

	    return 0;
	}