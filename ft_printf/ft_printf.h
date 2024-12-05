/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:18:47 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/26 10:12:16 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_putunint(unsigned int nb);
int		ft_puthexa(unsigned long nb, char format);
int		ft_putptr(void *ptr);
int		ft_format(char format, va_list args);
int		ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);

#endif