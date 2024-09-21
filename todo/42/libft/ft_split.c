/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:27:24 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/21 17:11:41 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_len_word(char const *s, char c, int start)
{
	int i;

	i = 0;
	while (s[start] != '\0')
	{
		if (s[start] == c)
			return (i + 1);
		i++;
	}
	return (i + 1);
}

int ft_cont_word(char const *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char **str;
	int i;
	int j;

	str = (char **)malloc (sizeof(char *) * ft_cont_word(s, c));
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			*str = (char *)malloc (sizeof(char) * ft_len_word(s, c, j));	
			str++;		
		}
		j++;
	}
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			str[i] = ft_strcpy(str[i], s);
		}
	}
	return (str);
}

/*int main(void)
{
    int i = 0;
    int j = 0;
    char **str = ft_split("hola mundo", 32);
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
	i = 0;
	while (str[i])
		free (str[i]);
    free (str);
    return (0);
}*/