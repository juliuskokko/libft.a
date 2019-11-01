/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 10:29:08 by jkokko            #+#    #+#             */
/*   Updated: 2019/11/01 10:29:08 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_findsize(int a)
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
