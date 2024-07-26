#include<unistd.h>
#include<stdio.h>

int		ft_atoi(char *s)
{
    int i  = 0;
    int result = 0;
    int sign  = 1;

    while((s[i]>= 9 && s[i]<= 13) || s[i] == 32)
    {
        i++;
    }

    if(s[i] == '-' || s[i] == '+')
    {
        if(s[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    while(s[i] >='0' && s[i]<= '9')
    {
        result = result * 10 + s[i] - '0';
        i++;
    }
    return(sign * (int)result);

}
int		main(void)//
{//
	char a[] = "    \n\n\v\f\r\t -29AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}//

