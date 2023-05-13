## Description
Returns a pointer to the first occurrence of _character_ in the C string _str_.  
The terminating null-character is considered part of the C string. Therefore, it can also be located in order to retrieve a pointer to the end of a string.

## Declaration
```c
const char *strchr ( const char *str, int ch );
```