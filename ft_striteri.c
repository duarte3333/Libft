//Esta funcao aplica a funcao f a cada caracter de s
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (*s)
    {
        f(i, s);
        s++;
        i++;
    }
}
