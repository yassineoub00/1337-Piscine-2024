/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:09:26 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/09 09:56:12 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str)
{
    int a;
    a = 0;
    while (str[a] != '\0')
    {
        write(1, &str[a], 1);
        a++;
    }
}

void ft_strcmp(*s1, *s2)
{
    int i;
    i = 0;
    while (s1[i] ==  s2[i])
    {
        i++
    }
    while (s1[i] != s2[i])
    {
        return (s1[i] - s2[i]);
    }
    return(0);
}

void swp(char *s, char *j)
{
    int sp;
    sp = *s;
    *s = *j;
    *j = sp;
}

int main(int ac, char **av)
{
    int v;
    v = 1;
    while (av[v])
    {
        ft_strcmp(av[i], av[i + 1]);
        if (ft_strcmp > 1)
        {
            swp(av[i], av[i + 1]);
            ft_putstr(av[i];
        }
        v++;
    }
}
