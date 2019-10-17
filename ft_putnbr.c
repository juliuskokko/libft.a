/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:14:32 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 08:14:32 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr(int n)
{
    unsigned int nb;

    if (n < 0)
    {
    ft_putchar('-');
    nb = -(n);     
    }
    else
        nb = n;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + 48);
}
