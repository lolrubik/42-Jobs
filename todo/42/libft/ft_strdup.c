/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:34:41 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/16 20:08:51 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;

    i = 0;
    char *ptr = (char *)malloc(sizeof(s));
    if (!ptr)
        return (0);
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    return (ptr);
}
/*int main()
{
    char *ptr2 = (char *)ft_strdup("hola mundo");
    printf("%s\n", ptr2);
    free (ptr2);
    return (0);
}*/
