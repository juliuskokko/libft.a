/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:41:23 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/30 10:41:23 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
