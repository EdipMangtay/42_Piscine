
#include <unistd.h>

int letter_count(char c)
{
    int repeat;

    if(c >= 'A' && c <= 'Z')
    {
        repeat = c - 'A' + 1;
    }
    else if(c >= 'a' && c <= 'z')
    {
        repeat = c - 'a' + 1 ;
    }
    else
    repeat = 1;

    return(repeat);
}
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            int repeat_count = letter_count(av[1][i]);
            while (repeat_count--)
            {
                write(1, &av[1][i], 1); // Doğru karakteri yazdırmak için av[1][i] kullanılır.
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
