/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:25:49 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:06:42 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	int			i;

	i = 0;
	if (n == 0)
		return (0);
	str1 = s1;
	str2 = s2;
	while (str1[i] && str2[i] && n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_memcmp("123456", "123256", 2));
    return (0);
}*/
