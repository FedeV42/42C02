/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:42:51 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/28 19:24:25 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *src)
{
	char	*cadena;
	int		i;

	cadena = src;
	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] < 'a' || cadena[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
