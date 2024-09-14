/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:34:41 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/14 14:35:41 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;

    i = 0;
    char *ptr = (char *)malloc(sizeof(s));
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    if (!s)
        return (0);
    return (ptr);
}
/*int main()
{
    char *ptr2 = (char *)ft_strdup("hola mundo");
    printf("%s\n", ptr2);
    free (ptr2);
    return (0);
}*/
