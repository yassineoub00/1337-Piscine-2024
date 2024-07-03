/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbraim <youbraim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:03:58 by youbraim          #+#    #+#             */
/*   Updated: 2024/07/01 17:52:38 by youbraim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	rj3liha(char a)
{
	if ((a < '0' || a > '9') && (a < 'a' || a > 'z') && (a < 'A' || a > 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	ll;

	ll = 0;
	while (str[ll] != '\0')
	{
		if (str[ll] >= 'A' && str[ll] <= 'Z')
		{
			str[ll] += 32;
		}
		if (str[ll] >= 'a' && str[ll] <= 'z')
		{
			if (ll == 0 || rj3liha(str[ll - 1]))
			{
				str[ll] -= 32;
			}
		}
		ll++;
	}
	return (str);
}
