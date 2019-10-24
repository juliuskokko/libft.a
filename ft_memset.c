/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:11:59 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/23 10:11:59 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *dest, int ch, size_t count)
{
    size_t i;

    i = 0;
    while (i < count)
    {
        ((unsigned char*)dest)[i] = (unsigned char)ch;
        i++;
    }
    return (dest);
}
