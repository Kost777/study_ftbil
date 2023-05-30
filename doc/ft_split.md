## Description
Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.

## Declaration 
```c
char **ft_split(char const *s, char c);
```

## Parameter 
- s: The string to be split. 
- c: The delimiter character.

## Return 
- The array of new strings resulting from the split. 
- NULL if the allocation fails.