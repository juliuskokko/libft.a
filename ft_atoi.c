/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:45:09 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/25 12:33:33 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\r' || *str == '\f' || *str == ' ')
		*str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		*str++;
	}
	if (!(ft_isdigit(*str)))
		return (0);
	while (ft_isdigit(*str))
		res = res * 10 + (*str++ - 48);
	if (sign == 1)
		return (-res);
	return (res);
}
