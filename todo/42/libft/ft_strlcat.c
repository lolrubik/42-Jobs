/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:48 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/26 12:59:27 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] && size > 0)
	{
		dst[i] = src[j];
		j++;
		i++;
		size--;
	}
	return (i);
}
/*
int main()
{
    char dest[] = "hola ";
    const char src[] = "mundo";
    printf("%s", ft_strlcat(dest, src, 5));
    return (0);
}
*/