int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;
	int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	res = s1[i] - s2[i];
	return (res);
}
