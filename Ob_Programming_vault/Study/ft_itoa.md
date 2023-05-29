## Description
Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

## Declaration
```c
char *ft_itoa(int n);
```
## Parameter 
- n: the integer to convert.

## Return value
- The string representing the integer. 
- NULL if the allocation fails.