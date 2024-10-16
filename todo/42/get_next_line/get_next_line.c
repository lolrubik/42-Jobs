/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:25:08 by marco             #+#    #+#             */
/*   Updated: 2024/10/16 11:13:11 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *ft_read(int fd, char *buff)
{
    int read_bytes;
    char *aux;

    aux = malloc((BUFFER_SIZE + 2) * sizeof(char));
    if (!aux)
        return (NULL);
    read_bytes = read (fd, aux, BUFFER_SIZE);
    if (read_bytes == -1)
    {
        free (aux);
        return (NULL);
    }
    while (!(ft_strchr((const char *)aux, '\n')) && aux)
    {
        ft_strjoin(buff, aux);
        read_bytes = read (fd, aux, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free (aux);
            return (NULL);
        }
    }
    free (aux);
    return (buff);
}

char *get_next_line(int fd)
{
    static char *buff;
    char    *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    buff = ft_read(fd, buff);
    if (!buff)
        return (NULL);
    return (buff);
}

int main() {
    int fd = open("pedro.txt", O_RDWR | O_CREAT);
    
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }
    char *buffer = get_next_line(fd);
    printf("%s", buffer);

    // Realiza operaciones con el archivo (lectura/escritura)
    
    close(fd); // Cerrar el archivo
    return 0;
}