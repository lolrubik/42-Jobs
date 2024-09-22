/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:36:04 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/22 17:46:27 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_int_to_char(int m, int n, int i)
{
	char	*str;

	if (n == -2147483648)
	{
		m = 12;
		str = (char *)malloc((m + 1) * sizeof(char));
		str = "-2147483648";
		return (str);
	}
	else
		str = (char *)malloc((m + 1) * sizeof(char));
	while (n >= 10)
	{
		str[m - 1] = (n % 10) + '0';
		m--;
		n = n / 10;
	}
	if (n < 10)
		str[m - 1] = n + '0';
	if (i == 1)
		str[m - 2] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;
	int		m;
	int		i;

	m = 1;
	i = 0;
	if (n < 0)
	{
		n = -n;
		m++;
		i = 1;
	}
	c = n;
	while (n >= 10)
	{
		m++;
		n /= 10;
	}
	n = c;
	str = ft_int_to_char(m, n, i);
	return (str);
}
/*int main(void)
{
    char *s = ft_itoa(4);
    printf("%s", s);
    free (s);
    return (0);
}*/
