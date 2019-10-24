/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:17:22 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/24 12:45:56 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int y;

	y = 0;
	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[y] != '\0')
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
