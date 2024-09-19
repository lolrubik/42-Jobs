/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:48 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/16 21:26:51 by marco            ###   ########.fr       */
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
		j++;
		i++;
		size--;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
    char dest[] = "hola ";
    const char src[] = "mundo";
    printf("%s", ft_strlcat(dest, src, 5));
    return (0);
}*/
