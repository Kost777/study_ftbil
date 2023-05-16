## Description
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

## Declaration 
```c
char *ft_strtrim(char const *s1, char const *set)
```

## Parameter 
- s1: The string to be trimmed. 
- set: The reference set of characters to trim.

## Return 
- The trimmed string.
- NULL if the allocation fails.