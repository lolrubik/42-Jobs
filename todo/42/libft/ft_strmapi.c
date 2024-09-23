/*s = la string a iterar
f = la funcio a aplicar sobre cada caracter
valor devuelto: La string creada tras el correcto uso de f sobre cada caracter. NULL si falla la reserva de memoria.
Descripcion: Aplica la funcion f a cada caracter de la cadena s, pasando su indice como primer argumento y el propi caracter como segundo argumento. 
Se crea una nueva cadena con malloc para recoger los resultados de ls sucesivas aplicaiones de f
*/

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    int len;

    i = 0;
    len = ft_strlen((char *)s);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!s)
        return (0);
    if (!str)
        return (0);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
