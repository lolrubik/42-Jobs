/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:12:56 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:49:32 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*a;
	int					i;

	i = 0;
	a = s;
	while (n > 0 && a[i])
	{
		if (a[i] == c)
			return ((void *)s);
		i++;
		n--;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
    char s[] = "holza mundo con z";
    printf("%p", ft_memchr(s, 122, 5));
    return (0);
}*/
