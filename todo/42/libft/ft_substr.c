/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:37:21 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/21 12:31:14 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	i = 0;
	substr = (char *)malloc (sizeof(len));
	if (substr == 0)
		return (0);
	if ((int)start >= ft_strlen((char *)s))
		return (0);
	while (s[start] && len > 0)
	{
		substr[i] = s[start + i];
		i++;
		len--;
	}
	return (substr);
}

/*int main(void)
{
    printf ("%s", ft_substr("hola mundo", 2, 3));
    return (0);
}*/
