/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 23:05:59 by marco             #+#    #+#             */
/*   Updated: 2024/10/06 15:01:04 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long num, char *base)
{
	int	len;

	len = 0;
	if (num > 15)
	{
		len += ft_printhex(num / 16, base);
		len += ft_printhex(num % 16, base);
	}
	else
	{
		write(1, &base[num], 1);
		len++;
	}
	return (len);
}

int	ft_cont_numbers(int i)
{
	int	len;

	len = 0;
	if (i < 0)
	{
		len++;
		i *= -1;
	}
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

int	ft_cont_numbers_hex(unsigned int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 16;
		len++;
	}
	return (len);
}

int	ft_putchar_fd2(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
