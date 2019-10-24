/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:18:46 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/22 09:18:46 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t nbyte)
{
    unsigned char *ptr;

    ptr = (unsigned char*)s;
    while (nbyte-- > 0)
        *(ptr++) = 0;
}
