/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:00:54 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/24 12:37:58 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i++])
	{
		if (((unsigned char*)s)[i] == (char)c)
			break;
	}
	if (((unsigned char*)s)[i] == (char)c)
			return (ptr = (char *)&s[i]);
	return (NULL);
}
