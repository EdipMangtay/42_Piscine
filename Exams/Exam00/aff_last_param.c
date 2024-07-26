#include<unistd.h>

int main(int ac , char **av)
{
    int x = ac -1;
    int j  = 0;

    while(av[x][j] != '\0')
    {
        write(1,&av[x][j],1);
        j++;
    }
    write(1,"\n",1);
}
