/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:05:42 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/11 12:05:09 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
    char *str = "holamundo2";
	ft_isalpha(str);
//    printf("%d", ft_isalpha(str));
}
