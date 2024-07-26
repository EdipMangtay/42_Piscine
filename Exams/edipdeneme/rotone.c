#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void write_next_chars(char *str)
{
    int i = 0;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
        {
            ft_putchar(str[i] +1 );
        }
        else if(str[i] == 'z')
        {
            ft_putchar('a');
        }
        else if(str[i] == 'Z')
        {
            ft_putchar('A');
        }


        i++;
    }
}
int main()
{
    char *x = "edip";
    write_next_chars(x);
    write(1,"\n",1);
}

