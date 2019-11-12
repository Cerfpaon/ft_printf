#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void	test(int n, ...)
{
	va_list test;
	int		i;

	va_start(test, n);
	i = 0;
	while (i < n)
	{
		printf("%s\n", va_arg(test, "char*"));
		i++;
	}
	va_end(test);
}

int		main(int ac, char **av)
{
	
	test(7, "Hello", "World", "!", "wesh", "c", "quoi", "ca");

	return (0);
}




// FLAGS
// *: spécification de largeur, correspond a un argument de type int, ça sera remplacé par des espaces
// -: sans tiret les espaces sont avant, avec ils sont placés apres
// .: peut avoir un nombre apres, ce nombre peut-être obtenu via <*> (%.<nombre> ou <*>).
// Cette spécification correspond a la taille minimale du nombre (%d, i, o, u, x, X),
// ou la taille minimale de la chaîne de caracteres
// 0: affiche un nombre spécifié moins la taille du nombre de 0 avant le nombre (%0<nombre> ou <*>)

// STDARG
// va_list permet de déclarer un objet de type va_list qui va contenir les arguments envoyés a la fonction
// va_start permet de récupérer les arguments en parametre a l'intérieur de l'objet va_list: 
// va_start(va_list object, dernier param avant les params indéterminés)
// va_arg permet de récupérer les arguments de gauche a droite via des appels successifs de la fonction:
// va_arg(va_list object, type of arg)
// va_end permet de terminer l'analyse proprement: va_end(va_list object)