/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:25:45 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/18 17:15:42 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct      s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}                   t_list;

int     ft_isalpha(int ch);
int     ft_isdigit(int ch);
int     ft_isalnum(int ch);
int     ft_isascii(int c);
int     ft_isprint(int ch);
int     ft_toupper(int ch);
int     ft_tolower(int ch);
void    ft_bzero(void *s, size_t nbyte);
void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(char const *s);
void    ft_putendl(char const *s);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putnbr_fd(int n, int fd);
size_t  ft_strlen(const char *str);
void    *ft_memalloc(size_t size);
void    *ft_memset(void *dest, int ch, size_t count);
void    *ft_makefit(void *content, size_t content_size);
char    *ft_strdup(const char *str1);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t count);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t	*ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strstr(const char *haystack, const char *needle);
t_list  *ft_lstnew(void const *content, size_t content_size);
void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void    ft_lstdel(t_list **alst, void (*del)(void *,size_t));
void    ft_lstadd(t_list **alst, t_list *new);
void    ft_lstiter(t_list *lst, void (*f)(t_list*elem));
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));


#endif