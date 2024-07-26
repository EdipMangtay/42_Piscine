#include<unistd.h>
int main(){

    char x  = '9';

    while(x >='0'){
        write(1,&x,1);
        x--;
    }
    write(1,"\n",1);
}
