/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 10:57:40 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/29 10:57:40 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *new;

    if (!(new = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    i = 0;
    while (*s)
        *new++ = f(*s++);
    *new = '\0';
}
