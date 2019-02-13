/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamerlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:28:00 by jamerlin          #+#    #+#             */
/*   Updated: 2019/02/12 17:28:03 by jamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

int		log_error(const char *str1, const char *str2)
{
	if (MALLOC_DEBUG)
	{
		if (str1)
			ft_putstr_fd(2, str1);
		if (str2)
			ft_putstr_fd(2, str2);
		ft_putchar_fd(2, '\n');
	}
	return (0);
}

void	*log_error_null(const char *str1, const char *str2)
{
	if (MALLOC_DEBUG)
	{
		if (str1)
			ft_putstr_fd(2, str1);
		if (str2)
			ft_putstr_fd(2, str2);
		ft_putchar_fd(2, '\n');
	}
	return (NULL);
}
