/*s = la string a iterar
f = la funcion a aplicar sobre cada caracter
nada devuelto y ninguna funcion
a cada caracter de la string s aplica la funcion f dando como parametros el indice de cada caracter dentro de s
y la direccion del pripio caracter que podra modificarse si es necesario*/

void ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    if (s && f)
    {
        while (s[i])
        {
            (f(i, s[i]));
            i++;
        }
    }
}