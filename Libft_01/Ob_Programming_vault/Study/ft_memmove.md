## Description

The C library function **void *memmove(void *str1, const void *str2, size_t n)** copies **n** characters from **str2** to **str1**, but for overlapping memory blocks, memmove() is a safer approach than memcpy().

## Declaration

Following is the declaration for memmove() function.
```c
void *memmove(void *str1, const void *str2, size_t n)
```

## Parameters

-   **str1** − This is a pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
-   **str2** − This is a pointer to the source of data to be copied, type-casted to a pointer of type void*.
-   **n** − This is the number of bytes to be copied.


157595