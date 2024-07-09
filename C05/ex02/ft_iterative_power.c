/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:14:46 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/09 15:36:05 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (nb < 0)
	{
		return (0);
	}
	while (i < power)
	{
		r = r * nb;
		i++;
	}
	return (r);
}
