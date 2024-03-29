/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_2d_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:21:22 by rabougue          #+#    #+#             */
/*   Updated: 2017/08/08 02:51:23 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_print_2d_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab == NULL)
		ft_dprintf(2, "(NULL)\n");
	else
	{
		while (tab[i])
		{
			if (!ft_strstr(tab[i], "radr://5614542"))
				ft_dprintf(1, "%s\n", tab[i]);
			++i;
		}
	}
}
