/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:43:00 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:07:22 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && len > 0)
	{
		j = 0;
		while (big[i + j] == little[j] && (len - j) > 0)
		{
			if (little[j + 1] == '\0')
				return ((char *)little);
			j++;
		}
		i++;
		len--;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
    printf("%s", ft_strnstr("11114", "1114", 2));
    return (0); 
}*/
