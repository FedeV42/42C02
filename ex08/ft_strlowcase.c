/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:36:33 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/28 19:36:35 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
