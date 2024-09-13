/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:09:08 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 12:39:13 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (nptr)
	{
		if (*nptr == '-')
			p = 1;
		while (*nptr >= 48 && *nptr <= 57)
		{
			i += *nptr - 48;
			nptr++;
			if (*nptr <= 48 || *nptr >= 57)
			{
				if (p == 1)
					return (-i);
				return (i);
			}
			i *= 10;
		}
		nptr++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
    const char nptr[] = "   -- 12345asd564";
    printf("%d", ft_atoi(nptr));
    return (0);
}*/