#include <stdio.h> //

int		ft_atoi(char *s)
{
	int		sign;
	int	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + s[i] - '0';
		s++;
	}
	return (sign * (int)r);
}

int		main(void)//
{//
	char a[] = "    \n\n\v\f\r\t -21479AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}//

