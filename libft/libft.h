/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:16:20 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/25 11:29:11 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFFER_SIZE 255
# define FD_MAX 256

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_strcmp(const char *s1, const char *s2);
int				ft_abs(int a);
long			ft_labs(long a);
long long		ft_llabs(long long a);
double			ft_fabs(double a);
int				ft_max(int a, int b);
int				ft_min(int a, int b);
void			*ft_free(void *ptr);
int				ft_ifree(void *ptr, int ret);
int				ft_isspace(const char c);
void			ft_swap(int *a, int *b);
bool			start_with(const char *str, const char *find);
bool			end_with(const char *str, const char *find);

int				get_next_line(int fd, char **line);

void			*ft_memset(void *dest, int c, size_t len);
void			ft_bzero(void *dest, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memccpy(void *dest, const void *src, int c, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t			ft_strlcat(char *dest, const char *src, size_t destsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *str, const char *substr, size_t n);
int				ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(size_t num, size_t size);
char			*ft_strdup(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putstr_fd(char *s, int fd);
void			ft_putstr(char *s);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *newlst);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *newlst);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap\
					(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstfind(t_list *lst, int cmp(), void *key);
t_list		*ft_lstfindb(t_list *lst, bool cmp(), void *key);
void	ft_lstdelif(t_list **begin_list, void (*del)(), int (*cmp)(), void *key);
void	ft_lstdelifb(t_list **begin_list, void (*del)(), bool (*cmp)(), void *key);

#endif
