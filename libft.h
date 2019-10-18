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

int     ft_isalpha(int ch);
int     ft_isdigit(int ch);
int     ft_isalnum(int ch);
int     ft_isascii(int c);
int     ft_isprint(int ch);
int     ft_toupper(int ch);
int     ft_tolower(int ch);
void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(char const *s);
void    ft_putendl(char const *s);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putnbr_fd(int n, int fd);
size_t  ft_strlen(const char *str);
char    *ft_strdup(const char *str1);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t count);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t	*ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strstr(const char *haystack, const char *needle);


#endif