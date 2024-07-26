#include<unistd.h>
#include<stdio.h>


int ft_atoi(char *str)
{

    int i ,sign ,r;

    i = 0;
    sign =1;
    r  = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }

    if(str[i] == '-' ||  str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    while(str[i] <= '9' && str[i] >= '0')
    {
        r = r * 10 + str[i] - 48;
        i++;
    }
    return(sign * (int)r);
}
int		main(void)
{
    char a[] = "    \n\n\v\f\r\t -2123132AAAgreghrsth"; // Test stringi
    printf("%d\n",ft_atoi(a)); // Dönüştürülen sayıyı yazdır
}
