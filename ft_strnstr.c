/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:17:27 by jkokko            #+#    #+#             */
/*   Updated: 2019/11/05 14:04:50 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int y;

	y = 0;
	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[y] != '\0' || len--)
	{
		if (needle[i] == haystack[y])
			i++;
		else
			i = 0;
		y++;
		if (needle[i] == '\0')
			return ((char*)&haystack[y - i]);
		if (haystack[y] == '\0')
			return (NULL);
	}
}
