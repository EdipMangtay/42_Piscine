#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
    int i, sign, result;
    i = 0;
    sign = 1;
    result = 0;

    // Boşluk karakterlerini atla
    while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
    {
        i++;
    }

    // İşaret kontrolü
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        i++; // İşaret karakterini atl
    }

    // Sayı kısmını işle
    while ((s[i] >= '0' && s[i] <= '9'))
    {
        result = (result * 10) + (s[i] - '0');
        i++;
    }
    return (sign * result);
}
int		main(void)//
{//
	char a[] = "    \n\n\v\f\r\t --123AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}//

