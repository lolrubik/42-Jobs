/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:06:26 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/05 14:00:58 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
    return (1);
}

int	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
    return (1);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
    return (1);
}

int ft_type(char c, va_list args)
{
    int len;

    len = 0;
    if (c == 'c')
        len += ft_putchar_fd(args, 1);
    else if (c == 's')
        len += ft_putstr_fd(args, 1);
    else if (c == 'p')
    else if (c == 'd')
        len += ft_putnbr_fd(args, 1);
    else if (c == 'i')

    else if (c == 'u')
    else if (c == 'x')
    else if (c == 'X')
    else if (c == '%')
        len += ft_putchar_fd('%', 1);
    return (len);
}