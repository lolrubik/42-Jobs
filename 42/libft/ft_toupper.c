/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:06:39 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/12 17:31:25 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 90 && c > 65)
		return (c);
	if (c < 122 && c > 97)
	{
		c -= 32;
		return (c);
	}
	return ('\0');
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_toupper(100));
    return (0);
}*/
