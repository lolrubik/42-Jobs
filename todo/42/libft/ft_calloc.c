/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:46:17 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/21 12:23:04 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	size_t	j;
	char	*i;

	i = (char *)malloc (sizeof(size * nmeb));
	j = 0;
	if (nmeb <= 0 || size <= 0)
		return (0);
	if (i == 0)
		return (0);
	while (j < size)
	{
		i[j] = '\0';
		j++;
	}
	return ((void *)i);
}

/*int main()
{
    char *ptr = (char *)ft_calloc(sizeof(int), 5);
    printf("%s", ptr);
    free(ptr);

    return (0);
}*/
//main de prueba
/*int main()
{
    char *str;
    str = (char *)malloc(sizeof(char) * ft_strlen(str3));
    printf("%c", str[0]);
    str = (char *)calloc(sizeof(char), ft_strlen(str3));
    printf("%c", str[0]);
    void *ptr;
    str = (int *)malloc(sizeof(int) * 5);
    int a = (int)ptr;
    printf("%d\n", a);
    ++ptr;
    printf("%d\n", (int)*ptr);
    if (!str)
        return (0);
    char str2[6];
    str2[0] = 'h' = 104;
    str2[1] = 'e';
    str2[2] = 'l';
    str2[3] = 'l';
    str2[4] = 'o';
    str2[5] = '\0';

    str = (char *)ft_calloc(5,sizeof(char));
    str = "test1328888888888888888888";
    printf("%s", str);
    return(0);
}*/
