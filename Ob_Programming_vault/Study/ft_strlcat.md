# Discription
the **strlcat** function which provides a similar alternative to strcat (which appends a source string to a destination buffer). These functions are not a part of the standard C library, but they are commonly found in some operating systems or libraries. Replace the "strcat". The  `strlcat` is used to concatenate two strings while ensuring that the destination buffer does not overflow.

# Synopsis
```c
ft_strlcat(char *dst_, const char *src, size_t size);
```

# good To know 
- Useing 
```c
#include <bsd/string.h>
```
- Useing this at the End for Compiling Command  
```
- lbsd
```