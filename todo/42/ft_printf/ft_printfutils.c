/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:06:26 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/06 00:16:38 by marco            ###   ########.fr       */
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
    return (ft_cont_numbers(n));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		len += ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\0', fd);
    return (len);
}

int ft_remove_signed(int n, int fd)
{
	int len;

	if (n < 0)
		n *= -1;
	len = ft_putnbr_fd(n, fd);
	return (len);
}

int ft_type(char c, va_list args)
{
    int len;

    len = 0;
    if (c == 'c')
        len += ft_putchar_fd(va_arg(args, int),  1);
    else if (c == 's')
        len += ft_putstr_fd(va_arg(args, char *),  1);
    //else if (c == 'p')
    else if (c == 'd' || c == 'i')
        len += ft_putnbr_fd(va_arg(args, int), 1);
    else if (c == 'u')
		len += ft_remove_signed(va_arg(args, int), 1);
    else if (c == 'x')
		len += ft_printhex(va_arg(args, unsigned int), "0123456789abcdef");
    else if (c == 'X')
		len += ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (c == '%')
        len += ft_putchar_fd('%', 1);
    return (len);
}
