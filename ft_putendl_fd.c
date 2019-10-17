/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:45:00 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 10:45:00 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}
