/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:09:45 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/17 14:44:40 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	i = 0;
	len = (max - min);
	*range = (int *)malloc(sizeof(int) * (len));
	if (max <= min)
		return (-1);
	while (max > min)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (**range);
}
