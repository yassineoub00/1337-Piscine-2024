/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:19:55 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/17 18:44:00 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	len;

	i = 0;
	dest = 0;
	if (max <= min)
		return (0);
	if (max > min)
	{
		len = (max - min);
		dest = (int *)malloc(len + 1);
		while (i < max - min)
		{
			dest[i] = min + i;
			i++;
		}
	}
	return (dest);
}
