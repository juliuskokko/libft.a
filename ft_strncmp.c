/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:32:24 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/25 11:44:07 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n-- - 1) && (*s1++ && *s2++))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			break;
	}
	return ((int)((*s1) - (*s2)));
}
