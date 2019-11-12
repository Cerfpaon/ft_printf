#include "ft_libft.h"

int	dash_flag(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// if (str[i] != '.' && str[i] != '*' && !is_convertible(str[i]))
		//	return (0);
		if (str[i] == '*')
			
	}
	return (1);
}

int	str_is_legal(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '%')
		{
			i++;
			if (not_a_flag(str[i]))
				return (0);
			if (str[i] == '-' && !dash_flag(&str[i + 1]))
				return (0);
			while (!is_convertible(str[i]))
				i++;
		}
	}
	return (1);
}