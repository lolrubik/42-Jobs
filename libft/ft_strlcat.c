/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:48 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:07:08 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] && size > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		size--;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
    char dest[] = "hola mundo";
    const char src[] = "jefazo";
    printf("%s", ft_strlcat(dest, src, 4));
    return (0);
}*/
