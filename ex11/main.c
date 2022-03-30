/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:18:58 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/27 17:37:33 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


void	ft_putstr_non_printable(char *str);

int	main()
{
	char src [] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(src);
	
	return(0);
}
