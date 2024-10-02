/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:48 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/02 19:35:11 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (!dst && !src)
		return (0);
	while (src[j] && size >= j)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*
int main()
{
    char dest[14] = "a";
    printf("%d", (int)ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    write(1, "\n", 1);
    write(1, dest, 14);
}*/
