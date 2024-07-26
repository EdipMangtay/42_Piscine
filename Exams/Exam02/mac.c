/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mac.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amangtay < amangtay@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:14:43 by amangtay          #+#    #+#             */
/*   Updated: 2024/07/25 19:22:53 by amangtay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2)
{
    int i = 0 ;
    int tab[256] = {0};

    while(str1[i])
    {
        if(tab[(int)str1[i]] == 0)
        {
            tab[(int)str1[i]] = 1;
        }
        i++;
    }
    i = 0 ;
    while(str2[i] != '\0')
    {
        if(tab[(int)str1[i]] == 1)
        {
            tab[(int)str1[i]] = 2;
            write(1,&str1[i],1);
        }
        i++;
    }


}

int main(int ac , char **av)
{
    int i  = 0;
    if(ac == 3  )
    {
        solve(av[1],av[2]);

    }
    write(1,"\n",1);
}
