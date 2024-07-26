#include <unistd.h>

void putstr(char x)
{
    write(1,&x,1);
}

void yazdir(int nb)
{
    unsigned int  nbr;

    if(nb<0)
    {
        putstr('-');
        nb = -nb;
    }
    nbr = nb;
    if(nbr >= 0)
    {
        yazdir(nbr/10);

    }
}

int main()
{

}
