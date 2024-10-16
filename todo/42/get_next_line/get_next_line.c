/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:25:08 by marco             #+#    #+#             */
/*   Updated: 2024/10/16 12:36:12 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *ft_mountline(char *buff)
{
    int i;
    char *aux;

    i = 0;
    if (!aux[i])
        return (NULL);
    while (aux[i] && aux[i] != '\n')
        i++;
    aux = malloc (sizeof(char) * i + 1);
    if (!aux)
        return (NULL);
    i = 0;
    while (buff[i] && buff[i] != '\n')
    {
        aux[i] = buff[i];
        i++;
    }
    if (buff[i] == '\n')
        aux[i] = buff[i];
    return (aux);
}

static char *ft_read(int fd, char *buff)
{
    int read_bytes;
    char *aux;

    aux = malloc((BUFFER_SIZE + 2) * sizeof(char));
    if (!aux)
        return (NULL);
    read_bytes = 1;
    while (!(ft_strchr((const char *)aux, '\n')) && read_bytes != 0)
    {
        read_bytes = read (fd, aux, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            if (buff != NULL)
                free(buff);
            free (aux);
            return (NULL);
        }
        aux[read_bytes] = '\0';
        buff = ft_strjoin(buff, aux);
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
    line = ft_mountline(buff);
    return (line);
}

int main() {
    int fd = open("pedro.txt", O_RDONLY);
    
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }
    printf("%s", get_next_line(fd));

    // Realiza operaciones con el archivo (lectura/escritura)
    
    close(fd); // Cerrar el archivo
    return 0;
}