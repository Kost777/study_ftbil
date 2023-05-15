#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>


/* Libc functions */
// Part 1 

int		ft_isalpha(int arg);
int		ft_isdigit(int arg);
int		ft_isalnum(int arg);
int		ft_isascii(int arg);
int		ft_isprint(int arg);
int	    ft_tolower(int arg);
int	    ft_toupper(int arg);

size_t	ft_strlen(const char *str);
void    *ft_memset(void *str, int ch, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size_dest);
const char 	*ft_strchr(const char *str, int ch);
const char 	*ft_strrchr(const char *str, int ch);
int ft_strncmp(const char *str1, const char *str2, size_t size_cmp);
void 	*ft_memchr(const void *str, int ch, size_t size_cmp);
int ft_memcmp(const void *str1, const void *str2, size_t size_cmp);
char *ft_strnstr(const char *srcstr, const char *search, size_t size_cmp); 

int ft_atoi(char const *str);
void *ft_calloc(size_t num, size_t size);

// Part 2


#endif