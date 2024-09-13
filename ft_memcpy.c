/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:48:13 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:06:46 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	int					i;

	i = 0;
	d = dest;
	s = src;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	dest = d;
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char dest[] = "this is a test";
    const char src[] = "is a test";
    ft_memcpy(dest, src, 10);
    printf("%s", dest);
    return (0);
}*/