/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 09:10:44 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/21 09:10:44 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memalloc(size_t size)
{
    void *ptr;

    if (!(ptr = (void*)malloc(size)))
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}
