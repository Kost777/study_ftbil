#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void ft_test_striteri(unsigned int i, char *ch)
{
    *ch = *ch + i;
}

int main()
{
    char str_striteri[] = "Das ist ein Test";
    ft_striteri(str_striteri, ft_test_striteri);
    printf("Test: Original: %s; Result: %s\n", "Das ist ein Test", str_striteri);

    return 0;
}
