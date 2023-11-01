/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:01:43 by riolivei          #+#    #+#             */
/*   Updated: 2022/11/18 13:51:00 by riolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	conversion(int c, va_list args);
int	character(int c);
int	full_string(char *str);
int	hexa(unsigned int n, int c);
int	voidptr(unsigned long long ptr);
int	voidptr_put(uintptr_t n);
int	num_digits(int n);
int	unum_digits(unsigned int n);
int	ft_itoa(int n);
int	is_negative(int n);
int	ft_uitoa(unsigned int n);

#endif