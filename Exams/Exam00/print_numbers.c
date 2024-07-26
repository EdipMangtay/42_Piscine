
#include <unistd.h>
void	ft_print_numbers(void){

    char x = '0';

    while(x<='9'){
        write(1,&x,1);
        x++;

    }
    write(1,"\n",1);
}
int main(){
    ft_print_numbers();
}
