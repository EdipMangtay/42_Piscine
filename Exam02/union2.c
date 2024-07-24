#include <unistd.h>

void	ft_union(char *str, char *str2)
{
	int	tab[256] = {0};  // Tüm ASCII karakterlerini takip etmek için 256 elemanlı dizi.
	int	a;

	a = 0;
	while (str[a])
	{
		if (tab[(unsigned char)str[a]] == 0)
		{
			tab[(unsigned char)str[a]] = 1;
			write (1, &str[a], 1);
		}
		a++;
	}
	a = 0;
	while (str2[a])
	{
		if (tab[(unsigned char)str2[a]] == 0)
		{
			tab[(unsigned char)str2[a]] = 1;
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
