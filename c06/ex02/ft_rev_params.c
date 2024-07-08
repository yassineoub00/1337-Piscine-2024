/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:05:22 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/08 14:55:56 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int o;

	o = 0;
	while(str[o] != '\0')
	{
		ft_putchar(str[o]);
		o++;
	}
}

int main(int ac, char **av)
{
	int i;
	i = ac - 1;
	while (i > 0)
	{
		ft_putstr(av[i]); 
		write(1, "\n", 1);	
		--i;
	}
}
