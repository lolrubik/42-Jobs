/*content: el contenido con el que crear el nodo
devuelve el nuevo nodo y se utiliza malloc
Descripcion: crea un nuevo nodo utilizando malloc. La variable miembro content se inicializa con el contenido del parametro content. La variable next con null*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list;

    list = malloc(sizeof(t_list));
    if (!list)
        return (0);
    list->content = content;
    list->next = NULL;
    return (list);
}