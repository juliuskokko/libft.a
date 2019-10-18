/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:58:29 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 12:58:29 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t count)
{
    size_t i;

    i = 0;
    while (i < count && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < count)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
