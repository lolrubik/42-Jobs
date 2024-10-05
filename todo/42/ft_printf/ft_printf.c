/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:47:57 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/06 00:21:10 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(char const *str, ...)
{
    int i;
    int len;
    va_list args;

    va_start(args, str);
    i = 0;
    len = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            len += ft_type(str[i], args);
        }
        else
            len += ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end(args);
    return (len);
}

int main()
{
    int s = 5;
    int len;

    len = ft_printf("%i\n", s);
    ft_printf("%d", len);
    return (0);
}