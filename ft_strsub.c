/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:17:06 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/29 11:17:06 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

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
