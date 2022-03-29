/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:30:20 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/29 15:44:26 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *src)
{
	char	*cadena;
	int		i;

	cadena = src;
	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] > 'Z' || cadena[i] < 'A')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
