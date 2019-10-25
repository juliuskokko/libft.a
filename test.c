/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:30:20 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/25 12:31:30 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	return ((int)((*--s1) - (*--s2)));
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n--) && (*s1 && *s2))
	{
		if ((unsigned char)*s1++ != (unsigned char)*s2++)
			break;
	}
	return ((*s1 && !(*s2)) || (*s2 && !(*s1)) ? (int)((*--s1) - (*--s2)) : (int)((*s1) - (*s2)));
}

int     main()
{
    printf("%d\n", ft_strcmp("csdd", "csd"));
    return (0);
}
