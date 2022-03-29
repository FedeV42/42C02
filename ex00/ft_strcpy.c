/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:19:01 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/29 20:11:51 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*cadena;

	i = 0;
	cadena = src;
	while (cadena[i] != '\0')
	{
		dest[i] = cadena[i];
		i++;
	}
	cadena[i] = '\0';
	return (dest);
}
