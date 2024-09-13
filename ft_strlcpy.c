/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:20:00 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:07:14 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (dest && src && size > 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
    char dest[] = "hola mundo";
    const char src[] = "jefazo";
    printf("%s", ft_strlcpy(dest, src, 4));
    return (0);
}*/
