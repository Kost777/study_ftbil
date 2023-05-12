## Description
The C library function **void *memcpy(void *dest, const void *src, size_t n)** copies **n** characters from memory area **src** to memory area **dest**.

## Declaration

Following is the declaration for memcpy() function.
```c
void *memcpy(void *dest, const void * src, size_t n)
```
## Parameters

-   **dest** − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
    
-   **src** − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
    
-   **n** − This is the number of bytes to be copied.