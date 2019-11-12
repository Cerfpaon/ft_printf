#include "ft_libft.h"

int	is_mod(char c)
{
	char	convertible_ref[10];
	int		i;

	convertible_ref[0] = 'c';
	convertible_ref[1] = 's';
	convertible_ref[2] = 'p';
	convertible_ref[3] = 'd';
	convertible_ref[4] = 'i';
	convertible_ref[5] = 'u';
	convertible_ref[6] = 'x';
	convertible_ref[7] = 'X';
	convertible_ref[8] = '\0';
	i = 0;
	while (convertible_ref[i])
	{
		if (c == convertible_ref[i])
			return (1);
		i++;
	}
	return (0);
}

int check_field_width(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && !is_convertible(str[i]))
	{
		if (str[i] == '*')
			return (1);
		i++;
	}
	return (0);
}