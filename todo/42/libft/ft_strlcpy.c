/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:20:00 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:37 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	j;
	size_t	i;

	j = 0;
	i = ft_strlen((char *)src);
	if (size != 0)
	{
		while (src[i] && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
/*
int main()
{
    char dest[] = "hola mundo";
    const char src[] = "jefazo";
    printf("%i", (int)ft_strlcpy(dest, src, 4));
    return (0);
}*/