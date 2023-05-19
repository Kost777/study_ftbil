## Description
**strnstr** — locate a substring in a string
The **strnstr** function locates the first occurrence of the null-terminated string \c little in the string \c big, where not more than \c len characters are searched. Characters that appear after a \0 character are not searched. Since the **strnstr** function is a FreeBSD specific API, it should only be used when portability is not a concern.

## Declaration
```c
	char ft_strnstr(const char *srcstr, const char *search, size_t size_cmp)
```

## Return Value

- If search is an empty string, srcstr is returned; 
- if "search" occurs nowhere in big, NULL is returned; 
- otherwise a pointer to the first character of the first occurrence of "search" is returned.