/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:36:04 by marco             #+#    #+#             */
/*   Updated: 2024/09/17 18:40:45 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int i;
    
    if (n < 0)
    {
        n = -n;
        i = 1;
    }
    char *str = (char *)malloc(sizeof(n));
    if (i == 1)
        n = -n;
    str = n + "0";
    return (str);
}

int main(void)
{
    char *s = ft_itoa(100);
    printf("%s", s);
    return (0);
}