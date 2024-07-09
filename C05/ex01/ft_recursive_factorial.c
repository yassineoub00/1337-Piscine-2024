/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:38:27 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/09 14:11:17 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	while (nb < 1)
	{
		return (0);
	}
	while (nb > 1)
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}
