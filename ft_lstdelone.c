/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 08:54:34 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/23 08:54:34 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
    del((*alst)->content, (*alst)->content_size);
    free(*alst);
    *alst = NULL;
}
