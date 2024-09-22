/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:09:08 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/22 15:34:46 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr(const char *nptr, int i, int l, int p)
{
	while (nptr[l] >= 48 && nptr[l] <= 57)
	{
		i += nptr[l] - 48;
		l++;
		if (nptr[l] <= 48 || nptr[l] >= 57)
		{
			if (p == 1)
				return (-i);
			return (i);
		}
		i *= 10;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	p;
	int	l;

	i = 0;
	l = 0;
	p = 0;
	while (nptr[l] != '\0')
	{
		if (nptr[l] != '\n' && nptr[l] != '\t' && nptr[l] != '\v'
			&& nptr[l] != '\f' && nptr[l] != '\r' && nptr[l] != ' ')
		{
			if (nptr[l] == '+' || nptr[l] == '-')
			{
				if (nptr[l] == '-')
					p++;
				if (nptr[l + 1] < 48 || nptr[l + 1] > 57)
					return (0);
				return (ft_nbr(nptr, i, (l + 1), p));
			}
			return (0);
		}
		l++;
	}
	return (0);
}
/*int main()
{
    const char nptr[] = "       -12345564";
    printf("%d", ft_atoi(nptr));
    return (0);
}*/
