
#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb){

	unsigned int nbr;

	if(0>nb)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	else
		nbr = nb;
	if(nbr >= 10)
	{
		ft_putnbr(nbr /10);
	}
	ft_putchar(nbr %10 + '0');

}

int main()
{
	ft_putnbr( -2147483648);
}
