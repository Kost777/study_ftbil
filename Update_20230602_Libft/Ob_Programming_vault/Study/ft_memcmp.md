## Description

The C library function **int memcmp(const void *str1, const void *str2, size_t n))** compares the first **n** bytes of memory area **str1** and memory area **str2**.

## Declaration

Following is the declaration for memcmp() function.
```c
int memcmp(const void *str1, const void *str2, size_t n)
```
## Parameters

-   **str1** − This is the pointer to a block of memory.
-   **str2** − This is the pointer to a block of memory.
-   **n** − This is the number of bytes to be compared.

## Return Value
-   if Return value < 0 then it indicates str1 is less than str2.
-   if Return value > 0 then it indicates str2 is less than str1.
-   if Return value = 0 then it indicates str1 is equal to str2.