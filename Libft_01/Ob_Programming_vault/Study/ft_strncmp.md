## Description

The C library function **int strncmp(const char *str1, const char *str2, size_t n)** compares at most the first **n** bytes of **str1** and **str2**.

## Declaration
```c
	int strncmp(const char *str1, const char *str2, size_t n)
```

## Return Value
it isn't compar (str1[i] - str2[i])

This function return values that are as follows 
-   if Return value < 0 then it indicates str1 is less than str2.
-   if Return value > 0 then it indicates str2 is less than str1.
-   if Return value = 0 then it indicates str1 is equal to str2.