# Description
This function returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by _**s**_. The memory obtained is done dynamically using [malloc](https://www.geeksforgeeks.org/calloc-versus-malloc/) and hence it can be freed using [free()](https://www.geeksforgeeks.org/g-fact-30/).   
It returns a pointer to the duplicated string _**s**_.  
Below is the C implementation to show the use of strdup() function in C

## Declaration

```c
	char *strdup(const char *s);
```

