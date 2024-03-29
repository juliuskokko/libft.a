/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:46:14 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 13:46:14 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isalpha(int ch)
{
    return (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? 1 : 0);
}
