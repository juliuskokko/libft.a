/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:30:08 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/23 10:30:08 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*   ft_memcpy(void *dest, const void *src, size_t count)
{
    size_t i;

    i = 0;
    while (i < count)
    {
        ((unsigned char*)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}
