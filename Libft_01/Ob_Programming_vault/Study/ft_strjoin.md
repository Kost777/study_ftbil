## Description
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

## Declaration 
```c
char *ft_strjoin(char const *s1, char const *s2);
```

## Parameter 
- s1: The prefix string. 
- s2: The suffix string.

## Return 
- The new string.
- NULL if the allocation fails.