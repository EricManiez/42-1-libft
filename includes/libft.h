/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:43:14 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/14 13:56:11 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUF_SIZE 10
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "ft_printf.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					get_next_line(int const fd, char **line);

size_t				ft_strlen(const char *s);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

int					ft_islower(int c);

int					ft_isupper(int c);

int					ft_isalpha(int c);

int					ft_isalnum(int c);

int					ft_toupper(int c);

char				*ft_toupperstr(char *s);

int					ft_tolower(int c);

char				*ft_tolowerstr(char *s);

char				*ft_itoa(long int n, int absoluter);

char				*ft_uitoa(unsigned long int n);

char				*ft_strcpy(char *dst, const char *src);

char				*ft_strncpy(char *dst, const char *src, size_t n);

int					ft_strcmp(const char *s1, const char *s2);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

char				*ft_strdup(const char *s1);

char				*ft_strstr(const char *s1, const char *s2);

char				*ft_strnstr(const char *s1, const char *s2, size_t n);

char				*ft_strncat(char *s1, const char *s2, size_t n);

char				*ft_strcat(char *s1, const char *s2);

int					ft_pow(int base, int power);

int					ft_atoi(const char *str);

long				ft_atol(const char *str);

void				ft_putchar_fd(char c, int fd);

void				ft_putchar(char c);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putendl(char const *s);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putstr(char const *s);

void				ft_putnbr(int n);

void				ft_putnbr_fd(int n, int fd);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

int					ft_strequ(char const *s1, char const *s2);

void				ft_strclr(char *s);

size_t				ft_numlen(long int n);

size_t				ft_unumlen(unsigned long int n);

void				*ft_memset(void *b, int c, size_t len);

void				*ft_memalloc(size_t size);

char				*ft_strnew(size_t size);

void				*ft_memchr(const void *s, int c, size_t n);

char				*ft_strtrim(char const *s);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strnjoin(char const *s1, char const *s2, size_t length);

char				**ft_strsplit(char const *s, char c);

void				ft_strdel(char **as);

void				ft_memdel(void **ap);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

void				ft_bzero(void *s, size_t n);

void				*ft_memcpy(void *dst, const void *src, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				ft_striter(char *s, void (*f)(char*));

void				ft_striteri(char *s, void (*f)(unsigned int, char*));

char				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_isspace(char c);

t_list				*ft_lstnew(void const *content, size_t content_size);

void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));

void				ft_lstadd(t_list **alst, t_list *new);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));

char				*ft_strchrstr(char *s, char *charset);

char				*ft_strchrstrinv(char *s, char *charset);

char				*ft_charjoin(char const *s, char const c);

char				*ft_dec2hex(unsigned long dec, int memswitch, char caps);

char				*ft_strrev(char *s);

int					ft_dub_char_check(char *s, char c);

char				*ft_oct_conv(unsigned long int dec, int lead_0);

char				*ft_itoatest(long n);

void				ft_padding(size_t size, char c);

void				ft_strpadding(size_t size, char c, char **s);

int					ft_abs(int n);

void				ft_int_swap(int *a, int *b);

int					ft_endianness();

void				ft_swap(void *s1, void *s2);

int					ft_check_strnumarray_sort(char **a);

size_t				ft_arrlen(void *a);

void				ft_print_strarray(char **a, int newline);

char				**ft_strarrdup(char **a);

void				*ft_arr_shift(void *a);

void				*ft_arr_pop(void *a);

void				ft_arr_rotate(void *a);

void				ft_arr_rrotate(void *a);

void				ft_arr_rev(void *arr);

int					ft_arr_push_str(char **a, char *s);

int					ft_arr_unshift_str(char **a, char *s);

void				free_arr(void *arr);

#endif
