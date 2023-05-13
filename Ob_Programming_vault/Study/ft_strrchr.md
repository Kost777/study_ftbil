## Description

The C library function **char *strrchr(const char *str, int c)** searches for the last occurrence of the character **c** (an unsigned char) in the string pointed to, by the argument **str**.

## Declaration
```c
char *strrchr(const char *str, int c)
```

## Parameters
-   **str** − This is the C string.
-   **c** − This is the character to be located. It is passed as its int promotion, but it is internally converted back to char.