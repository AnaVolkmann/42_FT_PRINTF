/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavolkmann <anavolkmann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:01:05 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/05/09 10:44:00 by anavolkmann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_printf(const char *str, ...);
int ft_putstr(char *str);
int	ft_putchar(int c);
int ft_putnbr(int nbr);
int ft_putpointer(unsigned long nbr);
int ft_puthexa(unsigned int nbr, const char c);
int ft_putpointerhexa(unsigned int nbr, const char c);

#endif