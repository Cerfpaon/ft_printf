#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef	struct	s_type
{
	char c; // char
	char s; // char*
	char p; // void*
	char d; // int
	char i; // int
	char u; // unsigned int
	char x; // unsigned int
	char X; // unsigned int
}				t_type;

#endif