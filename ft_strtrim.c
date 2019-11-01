/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:51:55 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/30 10:51:55 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define WSPACES (' ' | '\n' | '\t' | ',')

char *ft_strtrim(char const *s)
{
    size_t i;
    char *ptr;

    i = 0;
    ptr = s;
    while (*ptr++ == WSPACES)
        i++;
    while (*ptr++)
        ;
    while (--*ptr == WSPACES)
        i++;
    if (!(ptr = (char*)malloc(sizeof(char) * (ft_strlen(s) - i + 1))))
        return (NULL);
    while (*s++ == WSPACES)
        ;
    while (i--)
        *ptr++ = *s++;
    *ptr = '\0';
    return (ptr);
}
