/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:11:17 by marco             #+#    #+#             */
/*   Updated: 2024/09/16 21:35:17 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{

	int	i;
	int	j;
	char *s3 = (char *)malloc(sizeof(s1) + sizeof(s2));
    
	i = 0;
	j = 0;
	if (s3 == 0)
		return (0);
	while (s1[i])
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	return (s3);
}

/*int main(void)
{
    char *ptr = ft_strjoin("hola ", "mundo");
    printf ("%s", ptr);
    free (ptr);
    return (0);
}*/
