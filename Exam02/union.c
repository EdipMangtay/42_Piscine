#include <unistd.h>

void	ft_union(char *str, char *str2)
{
	int	tab[10] = {0};
	int	a;

	a = 0;
	while (str[a])
	{
		if (tab[(int)str[a]] == 0)
		{
			tab[(int)str[a]] = 1;
			write (1, &str[a], 1);
		}
		a++;
	}
	a = 0;
	while (str2[a])
	{
		if (tab[(int)str2[a]] == 0)
		{
			tab[(int)str2[a]] = 100;
			write(1, &str2[a], 1);
		}
		a++;
	}
}

int	main ()
{

		ft_union("ali", "Edip");
	write(1, "\n", 1);
	return (0);
}
