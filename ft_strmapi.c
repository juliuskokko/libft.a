/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:02:28 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/29 11:02:28 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    unsigned int i;
    char *new;

    if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    i = 0;
    while (*s)
        new = f(i++, *s++);
}
