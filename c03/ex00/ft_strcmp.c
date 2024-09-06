int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx] == s2[idx] && s2[idx])
	{
		idx++;
	}
	return (s1[idx] - s2[idx]);
}
