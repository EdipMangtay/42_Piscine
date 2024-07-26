
#include<unistd.h>
#include<stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{

    if(s1[0] == '\0' || s2[0] == '\0')
    {
        return(0);
    }
    int i  = 0 ;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }

    s1[i] = '\0';
    return s1;
}
int main()
{
    char x[15] = "edip";
    char y[]= "mangtay";


    printf("Sonuç: %s\n", ft_strcpy(x, y));
    printf("%s",x);
}
