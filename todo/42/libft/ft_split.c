#include "libft.h"

static char **ft_dup(char **str,char const *s, char c, int m, int j, int i)
{
    m = 0;
    i = 0;
    j = 0;
    while (s[i])
    {
        str[m][j] = s[i];
        j++;
        if (s[i] == c)
        {
            str[m][j - 1] = '\0';
            j = 0;
            m++;
        }
        i++;
    }
    return (str);
}

static int ft_cont(char const *s, char c)
{
    int i;
    int m;

    i = 0;
    m = 1;
    while (s[i])
    {
        i++;
        if (s[i] == c)
            m++;
    }
    return (m);
}

char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int m;
    int j;

    m = ft_cont(s, c);
    str = (char **)malloc(sizeof(char *) * m);
    i = 0;
    m = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c || s[i] == '\0')
        {
            str[j] = (char *)malloc(sizeof(char) * (m + 1));
            m = 0;
            j++;
            i++;
        }
        i++;
        m++;
    }
    str[j] = (char *)malloc(sizeof(char) * (m + 1));
    return (ft_dup(str, s, c, m, j, i));
}

/*int main(void)
{
    char *s = "Eres un ceporro napion";
    char **st = ft_split(s, 32);
    int i = 0;
    while (st[i])
    {
        printf("%s\n", st[i]);
        free (st[i]);
        i++;
    }
    free (st);
    return (0);
}*/