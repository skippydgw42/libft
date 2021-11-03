
#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *str);
char	*ft_strdup(char *src);
//char	*ft_strcpy(char *dest, char *src);
//char	*ft_strncpy(char *dest, char *src, size_t len);
//char	*ft_strcat(char *dest, char *src);
//char	*ft_strncat(char *dest, char *src, size_t len);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
//char	*ft_strstr(char *str, char *to_find);
//int	ft_strcmp(char *s1, char *s2);
char	*ft_strnstr(char *str, char *to_find, size_t len);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_atoi(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int  c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
// memmove a finir
void	*ft_memmove(void *dst, const void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
//void	*ft_memalloc(size_t size);
//void	ft_memdel(void **ap);

#endif
