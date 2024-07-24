#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'Y') || (s[i] >= 'a' && s[i] <= 'y'))
			ft_putchar(s[i] + 1);
		else if (s[i] == 'Z')
			ft_putchar('A');
		else if (s[i] == 'z')
			ft_putchar('a');
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
