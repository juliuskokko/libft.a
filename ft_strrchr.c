/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:38:11 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/24 12:45:19 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int a;
	char *ptr;

	i = 0;
	a = 0;
	while (s[i++])
	{
		
		if (((char*)s)[i] == (char)c)
			a = i;
	}
	if (((char*)s)[a] == (char)c)
		return (ptr = (char*)&s[a]);
	return (NULL);
}
