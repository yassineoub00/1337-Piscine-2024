/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:46:04 by youbraim          #+#    #+#             */
/*   Updated: 2024/06/30 12:14:32 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int siz)
{
	int	yass;
	int	see;

	yass = 0;
	while (yass < siz / 2)
	{
		see = tab[yass];
		tab[yass] = tab[siz - 1 - yass];
		tab[siz - 1 - yass] = see;
		yass++;
	}
}
