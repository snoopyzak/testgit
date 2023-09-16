int	occ_a(char	*str)
{
	int	i = 0;
	{
		while (*str)
		{
			if (*str == 'A')
			{
				i += 1;
			}
			str++;
		}
		return (i);
	}
	
}