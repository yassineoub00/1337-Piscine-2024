/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:10:15 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/08 09:00:47 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		a++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		b *= 10;
		b += *str - 48;
		++str;
	}
	if (!(a % 2))
		return (b);
	return (-b);
}
