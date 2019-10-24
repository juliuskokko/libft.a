/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:21:58 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/22 08:21:58 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list *head;

    if(!(head = (t_list*)ft_memalloc(sizeof(t_list))))
        return (NULL);
    if (!(content == NULL))
    {
        if((head->content = ft_makefit(content, content_size)) == NULL)
            return (NULL);
        head->content_size = content_size;
        head->next = NULL;
    }
    else
    {
        head->content = NULL;
        head->content_size = 0;
        head->next = NULL;
    }
    return (head);
}
