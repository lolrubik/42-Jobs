/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:16:35 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/23 18:07:25 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;
	int	j;
    
	i = 0;
	j = 0;
	while (lst[j])
		j++;
	while (new[i])
	{
		lst[j - 1][i] = new[i];
		i++;
	}
}
