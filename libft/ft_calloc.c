/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:46:17 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 13:57:51 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmeb, size_t size)
{
    if (nmeb <= 0 || size <= 0)
        return (0);
    int *i = 4*((int *)malloc(sizeof(size)));
    if (i == 0)
        return (0);
    return ((void *)i);
}

int main()
{
    size_t nmeb = 2;
    ft_calloc(nmeb, 4);
    free(nmeb);
    return(0);
}