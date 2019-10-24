/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makefit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:16:46 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/22 10:16:46 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_makefit(void *content, size_t content_size)
{
    void            *fit;
    unsigned char   *ptr;
    unsigned char   *ptr2;

    if (!(fit = ft_memalloc(content_size)))
        return (NULL);
    ptr = (unsigned char*)content;
    ptr2 = (unsigned char*)fit;
    while (*ptr)
        *(ptr2++) = *(ptr++);
    return (fit);
}
