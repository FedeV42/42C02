/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:10:09 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/28 19:35:22 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	*cadena;

	cadena = str;
	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] > 96 && cadena[i] < 123)
		{
			cadena[i] = cadena[i] + ('A' - 'a');
		}
		i++;
	}
	return (cadena);
}
