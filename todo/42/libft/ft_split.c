/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:05:56 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/27 19:11:29 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strmac(char **str, char const *s, char c)
{
	int	j;
	int	m;
	int	i;

	i = 0;
	m = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			str[j] = (char *)malloc(sizeof(char) * (m + 1));
			m = 0;
			j++;
			while (s[i] == c)
				i++;
		}
		else if (s[i + 1] == '\0')
			str[j] = (char *)malloc(sizeof(char) * (m + 2));
		i++;
		m++;
	}
	return (m);
}

static char	**ft_dup(char **str, char const *s, char c)
{
	int	m;
	int	i;
	int	j;

	m = 0;
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		str[m][j] = s[i];
		j++;
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			str[m][j] = '\0';
			j = 0;
			m++;
			while (s[i] == c)
				i++;
		}
	}
	return (str);
}

static int	ft_cont(char const *s, char c)
{
	int	i;
	int	m;

	i = 0;
	while (s[i] == c)
	{
		m = 0;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			while (s[i] == c)
				i++;
			m++;
		}
		i++;
	}
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		m;
	int		j;
	int		i;

	m = ft_cont(s, c);
	i = 0;
	if (m == 0)
		return (0);
	str = (char **)malloc(sizeof(char *) * (m + 1));
	j = 0;
	m = ft_strmac(str, s, c);
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
		{
			j++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	str[j] = (char *)malloc(sizeof(char));
	str[j][0] = '\0';
	return (ft_dup(str, s, c));
}
/*int main(void)
{
    char *s = "hola mundo";
	char c = 32;
    char **st = ft_split(s, c);
    int i = 0;
	if (!st)
		return (0);
    while (st[i][0] != '\0')
    {
        printf("%s\n", st[i]);
		free (st[i]);
        i++;
    }
    free (st);
    return (0);
}*/
