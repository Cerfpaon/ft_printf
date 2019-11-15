#include "ft_printf.h"

int	get_nb_args(const char *str)
{
	int nb_args;
	int	i;

	nb_args = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '%')
		{
				nb_args++;
				if (check_field_width(&str[i + 1]) == -1)
					return (-1);
					nb_args++;
		}
		i++;
	}
}

int	manage_arg(const char *str, va_list args, char format)
{
	t_modif	arr_t_format[9];
	int		ret;
	int		i;

	i = 0;
	while (format != arr_t_format[i]->format)
		i++;
	return (ret);	
}

int	browse_str(const char *str, va_list args, int nb_args)
{
	char	format;
	int		ret;
	int		i;

	ret = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			format = get_next_mod(str[i + 1]);
			ret += manage_arg(&str[i + 1], arg, format);
		}
		else
		{
			ret += ft_putchar(str[i]);	
			i++;
		}
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		nb_args;
	int		ret;

	if (!str_is_legal(str))
		return (error());
	nb_args = get_nb_args(str);
	va_start(args, str);
	ret = browse_str(str, args, nb_args);
	va_end(args);
	return (ret);
}