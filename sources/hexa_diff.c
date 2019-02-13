/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_diff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamerlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:27:51 by jamerlin          #+#    #+#             */
/*   Updated: 2019/02/12 17:27:53 by jamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

int		hexadiff(void *addr1, void *addr2)
{
	print_addr(addr1, 0);
	ft_putstr(" - ");
	print_addr(addr2, 0);
	ft_putstr(" : ");
	ft_print_unsigned_long_long(addr2 - addr1);
	ft_putstr(" octets\n");
	return (addr2 - addr1);
}
