/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:51:21 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/18 10:11:37 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	i = 0;
	if (src[i] == '\0')
		return (0);
	if (dest[j] == '\0')
		return (src);
	while  (src[i + j] < size)
	{
		while (dest[j] != '\0')
			j++;
		dest = src[j + i]
			i++;
	}
	dest = '\0';
	return( (dest)
}
