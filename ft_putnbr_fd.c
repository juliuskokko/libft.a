/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:46:19 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 10:46:19 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int nb;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nb = (unsigned int)(n * -1);
    }
    else
        nb = (unsigned int)n;
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((char)(nb % 10) + 48, fd);
}
