/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:36:04 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/30 12:24:41 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_int_to_char(int m, int n, int i)
{
	char	*str;

	str = malloc(sizeof(char) * (m + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	while (!(n > -10 && n < 10))
	{
		str[m - 1] = (n % 10) + '0';
		m--;
		n = n / 10;
	}
	if (n > -10 || n < 10)
		str[m - 1] = n + '0';
	if (i == 1)
		str[m - 2] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long		c;
	long		m;
	long		i;

	m = 1;
	i = 0;
	if (n < 0)
	{
		m++;
		i = 1;
	}
	c = n;
	while (!(n > -10 && n < 10))
	{
		m++;
		n /= 10;
	}
	str = ft_int_to_char(m, c, i);
	return (str);
}
/*int main(void)
{
    char *s = ft_itoa(-2147483647);
    printf("%s", s);
    free (s);
    return (0);
}*/
