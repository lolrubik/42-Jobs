/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 23:05:59 by marco             #+#    #+#             */
/*   Updated: 2024/10/06 00:14:48 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printhex(unsigned int num, char *base)
{
    int cpy;
    int len;

    cpy = num;
    while (cpy != 0)
    {
        cpy /= 16;
        len++;
    }
    if (num > 15)
    {
        ft_printhex(num / 16, base);
        ft_printhex(num % 16, base);
    }
    else
        write (1, &base[num], 1);
    return (len + 1);
}

int ft_cont_numbers(unsigned int i)
{
    int len;

    len = 0;
    if (i == 0)
        return (1);
    while (i != 0)
    {
        i /= 10;
        len++;
    }
    return (len);
}

/*int main()
{
    int num = 53732734;
    char *base = "0123456789ABCDEF";

    int len2 = printf("%X\n", num);
    int len = ft_printhex(num, base);
    printf("\n%d\n", len);
    printf("%d", len2);
    return (0);
}*/
