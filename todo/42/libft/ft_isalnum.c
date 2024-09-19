/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:15:39 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/12 16:53:18 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90)
			&& (str[i] < 48 || str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char *str = "2131651";
    printf("%d", ft_isalnum(str));
}*/
