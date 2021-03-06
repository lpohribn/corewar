/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:04:55 by rnovodra          #+#    #+#             */
/*   Updated: 2017/11/17 19:06:55 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 8192
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define SWAP(a, b, type) { type c; c = b; b = a; a = c; }
# define GET_VARNAME(var) (#var)

# define TESTBYTE(x) if (p[x] == '\0') return (p - str + x);

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *restrict dest, const char *restrict src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
ssize_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *find);
char				*ft_strnstr(const char *str, const char *find, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				**ft_strsplit_2ch(const char *s, char c1, char c2);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void				ft_arrfree(void ***array);
void				ft_arrnfree(void ***array, size_t len);
void				ft_swap(int *a, int *b);
int					ft_count_words(char const *s, char c);
int					ft_count_digits(int nbr);
ssize_t				ft_strclen(const char *s, const char c);
int					ft_prime(size_t n);
size_t				ft_clist(t_list *begin);
int					ft_atoi_base(const char *str, int str_base);
char				*ft_itoa_base(int value, int base);
void				ft_revstr(char *str);

void				ft_inssort(int *arr, size_t len);
void				ft_qsort(int *arr, size_t len);
void				ft_bubsort(int *tab, size_t len);
ssize_t				ft_numlen(ssize_t n);

int					ft_pow(int val, int pow);
float				ft_powf(float val, int pow);
double				ft_powd(double val, int pow);
long double			ft_powld(long double val, int pow);
float				ft_sqrtf(float x);
double				ft_randd(double min, double max);

void				ft_putarr(char **arr);
char				**ft_arrcpy(char **dest, const char **arr);
char				**ft_arrdup(const char **arr);
ssize_t				ft_arrlen(const char **arr);
char				**ft_arrnew(size_t n_ptr, size_t size);
char				**ft_arrjoin(const char **arr1, const char **arr2);
char				**ft_arrcat(char **dest, const char **src);
char				**ft_arr_realloc(const char **cpy, int size);

void				ft_print_memory(const void *addr, size_t size);
void				ft_print_bits(const void *b, size_t size);
void				ft_bytesrev(void *a, size_t size);

int					ft_gradient(int f_color, int s_color, double procent);

char				*ft_read_file(int fd);
int					get_next_line(const int fd, char **line);
int					ft_getnbr(const char **str, int *nbr);

int					ft_isproc(const char *proc_name);

void				*ft_nrealloc(void *ptr, size_t plen, size_t size);

#endif
