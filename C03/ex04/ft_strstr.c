/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:45:12 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/18 09:47:09 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	ok;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		ok = 0;
		while ((str[i + ok] == to_find[ok]) && str[i + ok] != '\0'
			&& to_find[ok] != '\0')
			ok++;
		if (to_find[ok] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
