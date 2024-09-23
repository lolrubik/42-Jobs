/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:20:57 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/22 16:34:05 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int n, int fd)
{
    int i;
    char *str;

    i = 0;
    str = ft_itoa(n);
    while (str[i])
    {
        write (fd, &str[i], 1);
        i++;
    }
}
/*int main(void)
{
    ft_putnbr(5461);
    return (0);
}*/