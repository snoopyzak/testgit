int	ft_strlen(char *str)
{
    unsigned int i = 0;

    while(*str)
    {
        i++;
        str++;
    }
    return (i);
}