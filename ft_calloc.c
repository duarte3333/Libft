#include "libft.h"

//O nmemb sao o numero de elementos
//O size representa o numero de bytes 
//que cada elemento ocupa
//Aloca espaco para o array com o malloc
//e preenche com zeros
void    *ft_calloc(size_t nmemb, size_t size)
{
    void *p;
    size_t final_size;

    if (nmemb == 0 || size == 0)
    {
        nmemb++;
        size++;
    }
    final_size = nmemb*size;
    p = malloc(final_size);
    if(!p)
        return (NULL);
    else
        ft_bzero(p, final_size);
    return (p);
}
