/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:54:32 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/19 17:00:25 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunint(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
		i += ft_putunint(nb / 10);
	i += ft_putchar(nb % 10 + 48);
	return (i);
}
