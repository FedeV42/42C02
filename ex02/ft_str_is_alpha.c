/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:01:45 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/27 21:05:03 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		res;
	char	*cadena;

	cadena = str;
	i = 0;
	res = 0;
	while (cadena[i])
	{
		if (cadena[i] > 'z' || cadena[i] < 'a')
		{
			if (cadena[i] > 'Z' || cadena[i] < 'A')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
