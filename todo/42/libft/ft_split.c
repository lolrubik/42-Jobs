/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:47:43 by marco             #+#    #+#             */
/*   Updated: 2024/09/16 22:06:21 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	x;
	char **str = (char **)malloc (sizeof(s));

	i = 0;
	j = 0;
	x = 0;
	while (s[x] != c)
	{
		str[i][j] = s[x];
		x++;
		j++;
		if (s[x] == c)
		{
			str[i][j] = '\n';
			i++;
			j = 0;
		}
	}
	return (str); 
}

/*int main(void)
{
    int i = 0;
    int j = 0;
    char **str = ft_split("jejejejeje", 101);
    while (str[i][j] != '\0')
    {
        write (1, &str[i][j], 1);
        j++;
        if (str[i][j] == '\0')
        {
            i++;
            j = 0;
        }
    }
    free (str);
    return (0);
}*/
