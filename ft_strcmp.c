int	ft_strcmp(const char *s1, const char *s2)
{
	int	res;
	int	i;

	i = 0;
	while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	res = s1[i] - s2[i];
	return (res);
}
