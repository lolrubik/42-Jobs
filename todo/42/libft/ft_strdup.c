/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:34:41 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/21 12:34:47 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(s));
	if (!ptr)
		return (0);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
/*int main()
{
    char *ptr2 = (char *)ft_strdup("hola mundo");
    printf("%s\n", ptr2);
    free (ptr2);
    return (0);
}*/
