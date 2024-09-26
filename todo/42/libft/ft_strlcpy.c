/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:20:00 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/26 12:57:23 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dest && src && size > 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	return (i);
}

/*int main()
{
    char dest[] = "hola mundo";
    const char src[] = "jefazo";
    printf("%s", ft_strlcpy(dest, src, 4));
    return (0);
}*/
