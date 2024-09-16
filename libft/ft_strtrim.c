/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:35:42 by marco             #+#    #+#             */
/*   Updated: 2024/09/16 21:47:34 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;

    i = 0;
    j = 0;
    char *str = (char *)malloc(sizeof(s1) - sizeof(set));
    if (!str)
        return (0);
    if (s1 == set)
        return (0);
    while (s1[i] == set[i])
        i++;
    while (s1[i])
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    return (str);
}

/*int main(void)
{
    char *p = ft_strtrim("hola mundo", "hola mudo");
    printf ("%s", p);
    return (0);
}*/