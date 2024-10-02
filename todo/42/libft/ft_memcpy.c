/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:48:13 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/02 12:43:06 by marco            ###   ########.fr       */
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
	if (s[i] && d[i])
	{
		while (n > 0)
		{
			d[i] = s[i];
			i++;
			n--;
		}
		return (dest);
	}
	return (NULL);
}
/*int main()
{
    char *dest = "";
    const char *src = "";
    ft_memcpy(dest, src, 14);
    printf("%s", dest);
    return (0);
}*/