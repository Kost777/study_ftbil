## Description
The C library function **void *memchr(const void *str, int c, size_t n)** searches for the first occurrence of the character **c** (an unsigned char) in the first **n** bytes of the string pointed to, by the argument **str**.

## Declaration
```c
void *ft_memchr(const void *str, int c, size_t n)
```

It is a littel bit analog to [[ft_strchr]]

## Parameters

-   **str** − This is the pointer to the block of memory where the search is performed.
-   **c** − This is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
-   **n** − This is the number of bytes to be analyzed.

## Return Value

This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.