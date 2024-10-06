/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:47:57 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/06 16:26:48 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

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
//int main(void)
//{
//    void *num = 0;
//    
//	int len = printf(" %p %p ", num, num);
//    int len2 = ft_printf(" %p %p ",num, num);
//
//    printf("len = %d, lenmine = %d\n", len, len2);
//	return (0);
//}