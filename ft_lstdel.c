/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:09:28 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/23 09:09:28 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
    void *ptr;
    while (ptr != NULL)
    {
        ptr = (*alst)->next;
        ft_lstdelone(alst, del);
        (*alst) = ptr;
    }
}
