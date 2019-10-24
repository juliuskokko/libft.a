/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:30:20 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/24 13:46:46 by jkokko           ###   ########.fr       */
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

int     main()
{

    void *ptr;

    ptr = ft_memmove("miekkavalas", "hiekkavalas", 5);
    printf("%s", (char*)ptr);
    return (0);
}
