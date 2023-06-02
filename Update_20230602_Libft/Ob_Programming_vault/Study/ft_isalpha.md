## Description
checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some lo‐ cales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.

## Declaration
```c
int ft_isalpha (int arg)
```