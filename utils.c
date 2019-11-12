#include "ft_printf.h"

// libft
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

// utils
int	is_mod(char c)
{
	char	mod_ref[10];
	int		i;

	mod_ref[0] = 'c';
	mod_ref[1] = 's';
	mod_ref[2] = 'p';
	mod_ref[3] = 'd';
	mod_ref[4] = 'i';
	mod_ref[5] = 'u';
	mod_ref[6] = 'x';
	mod_ref[7] = 'X';
	mod_ref[8] = '%';
	mod_ref[9] = '\0';
	i = 0;
	while (mod_ref[i])
	{
		if (c == mod_ref[i])
			return (1);
		i++;
	}
	return (0);
}

char	get_next_mod(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && !is_mod(str[i]))
		i++;
	return (str[i]);
}

