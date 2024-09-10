/*
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (idx < n && (s1[idx] || s2[idx]))
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	return (0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (0 < n-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}
