char    *ft_strcpy(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s2[c] != '\0')
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = '\0';
	return(s2);
}
