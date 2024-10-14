/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:25:08 by marco             #+#    #+#             */
/*   Updated: 2024/10/14 14:24:35 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read(int fd, char *buff)
{
    int mem;
    char *aux;

    aux = malloc((BUFFER_SIZE + 2) * sizeof(char));
    if (!aux)
        return (NULL);
    
}

char *get_next_line(int fd)
{
    static char *buff;
    char    *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
}