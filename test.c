/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:30:20 by jkokko            #+#    #+#             */
/*   Updated: 2019/11/05 14:15:34 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void *)s + i);
        i++;
	}
	return (NULL);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return (((char*)s1)[i] - ((char*)s2)[i]);
        i++;
	}
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i++])
	{
		if (((unsigned char*)s)[i] == (char)c)
			break;
	}
	if (((unsigned char*)s)[i] == (char)c)
			return (ptr = (char *)&s[i]);
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int a;
	char *ptr;

	i = 0;
	a = 0;
	while (s[i++])
	{
		
		if (((char*)s)[i] == (char)c)
			a = i;
	}
	if (((char*)s)[a] == (char)c)
		return (ptr = (char*)&s[a]);
	return (NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

    unsigned char *ptr;
    unsigned char *ptr2;

    ptr = ((unsigned char*)dst);
	ptr2 = ((unsigned char*)src);
	if (ptr < ptr2)
    {
        while (len--)
            *ptr++ = *ptr2++;
    }
    else
    {
        ptr = ((unsigned char*)dst) + (len - 1);
        ptr2 = ((unsigned char*)src) + (len - 1);
        while (len--)
            *ptr-- = *ptr2--;
    }
	return (dst);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 && *s2) && ((unsigned char)*s1++ == (unsigned char)*s2++))
		;
	return (!(*s1 && *s2) ? (int)((*s1) - (*s2)) : (int)((*--s1) - (*--s2)));
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n--)
	&& (*s1 && *s2)
	&& ((unsigned char)*s1++ == (unsigned char)*s2++))
		;
	return (!(*s1 && *s2) ? (int)((*s1) - (*s2)) : (int)((*--s1) - (*--s2)));
}
*/

/*
char    *ft_strsub(char const *s, unsigned intstart, size_t len)
{
    char *new;
    size_t i;

	i = 0;
    if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (len--)
        new[i++] = s[intstart++ - 1];
    new[i] = '\0';
	return (new);
}

size_t  ft_strlen( const char *str )
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const*s2)
{
    char *new;
    char *ptr;

    if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    ptr = new;
    while (*s1)
        *ptr++ = *s1++;
    while (*s2)
        *ptr++ = *s2++;
    *ptr = '\0';
    return (new);
}

#define WSPACES(x) (x == ' ' || x == '\n' || x == '\t' || x == ',')

char *ft_strtrim(char const *s)
{
    char *ptr;
	unsigned int intstart;
	size_t len;

	ptr = (char*)s;
	intstart = 1;
	len = 0;
	while (WSPACES(*ptr))
	{
		intstart++;
		*ptr++;
	}
	while (*ptr)
		*ptr++;
	while (*--ptr && WSPACES(*ptr))
		len++;
	ptr = ft_strsub(s, intstart, ft_strlen(s) - len - intstart);
	return (ptr);
}

*/
/*
int     ft_isdigit(int ch)
{
    return ((ch >= '0' && ch <= '9') ? 1 : 0);
}

int		ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\r' || *str == '\f' || *str == ' ')
		*str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		*str++;
	}
	if (!(ft_isdigit(*str)))
		return (0);
	while (ft_isdigit(*str))
		res = res * 10 + (*str++ - 48);
	if (sign == 1)
		return (-res);
	return (res);
}

int ft_findsize(int a)
{
	unsigned int size;
    int i;

	size = a;
    if (a < 0)
        size = -(a);
    i = 0;
    while (size > 0)
    {
        size /= 10;
        i++;
    }
    if (i == 0)
        i = 1;
	if (a < 0)
		i++;
	return (i);
}

char    *ft_itoa(int n)
{
    char *str;
    int i;
    unsigned int y;

	y = n;
	if (n < 0)
		y = (unsigned int)(n * -1);
	i = ft_findsize(n);
    if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    str[i] = '\0';
    while (i)
    {
        str[--i] = (y % 10) + 48;
        y /= 10;
		if (n < 0 && i == 0)
			str[i] = '-';
    }
    return (str);
}
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int y;

	y = 0;
	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[y] != '\0' || len--)
	{
		if (needle[i] == haystack[y])
			i++;
		else
			i = 0;
		y++;
		if (needle[i] == '\0')
			return ((char*)&haystack[y - i]);
		if (haystack[y] == '\0')
			return (NULL);
	}
	return (NULL);
}

int     main()
{
	char *ptr = ft_strnstr("keikku keikku", "ku ke", 11);
	printf("%s\n", ptr);
	return (0);
}
