/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:44:01 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 12:44:01 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str1)
{
    int i;
    char *str2;

    i = 0;
    if (!(str2 = (char*)malloc(sizeof(const char*) * (ft_strlen(str1) + 1))))
        return (NULL);
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    return (str2);
}
