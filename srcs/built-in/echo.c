/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hublanc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 14:12:29 by hublanc           #+#    #+#             */
/*   Updated: 2017/07/24 12:10:11 by hublanc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void		ft_echo(char **tab)
{
	int		i;

	i = 1;
	if (len_array(tab) > 1)
	{
		while (tab[i])
		{
			ft_putstr(tab[i]);
			if (tab[i + 1])
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
}