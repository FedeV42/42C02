/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:44:15 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/29 20:43:39 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	*cadena;

	i = 0;
	cadena = str;
	while (cadena[i] != '\0')
	{
		if (cadena[i] > 64 && cadena[i] < 91)
		{
			cadena[i] = cadena[i] + ('a' - 'A');
		}
		i++;
	}
	return (cadena);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i
						- 1] >= '0' && str[i - 1] <= '9') || (str[i
						- 1] >= 'A' && str[i - 1] <= 'Z'))
			{
			}
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
