/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:16:42 by marco             #+#    #+#             */
/*   Updated: 2024/09/30 18:41:25 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;

	i = ft_lstsize(lst);
	while (i > 0)
	{
		*lst = del(*lst);
		free(*lst);
		lst = lst->next;
		i--;
	}
	lst->next = NULL;
}
