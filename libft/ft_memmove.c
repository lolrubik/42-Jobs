/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:12:01 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 12:37:29 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char *d;
	const unsigned char *s;

	i = 0;
	d = dest;
	s = src;
	if (d <= s)
    {
        while(n > 0)
        {
            d[i] = s[i];
            i++;
            n--;
        }
    }
    else
    {
        ft_memcpy(dest, src, n);
    }
    return (dest);
}

/*#include <stdio.h>
int main()
{
    char dest[] = "this is a test";
    const char src[] = "this is is a test";
    ft_memmove(dest, src, 10);
    printf("%s", dest);
    return (0);
}*/
