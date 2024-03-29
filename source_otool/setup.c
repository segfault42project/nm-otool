/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 20:38:38 by rabougue          #+#    #+#             */
/*   Updated: 2017/08/08 02:58:19 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "otool.h"

char	*setup_unset(char *argv, t_setup *setup, char flag)
{
	if (flag == 's')
	{
		setup->fd = open(argv, O_RDONLY);
		if (setup->fd == -1)
			return (NULL);
		if (fstat(setup->fd, &setup->buf) == -1)
			return (NULL);
		setup->ptr = mmap(0, (size_t)setup->buf.st_size, PROT_READ,
		MAP_PRIVATE, setup->fd, 0);
		if (setup->ptr == MAP_FAILED)
			return (NULL);
	}
	else if (flag == 'u')
	{
		if (munmap(setup->ptr, (size_t)setup->buf.st_size) == -1)
			return ((char *)-1);
		ft_memset(setup, 0, sizeof(t_setup));
	}
	return (setup->ptr);
}
