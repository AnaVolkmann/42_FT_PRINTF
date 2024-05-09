/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavolkmann <anavolkmann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:50:50 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/05/09 10:40:51 by anavolkmann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief */

/* linha: 29- verifico se existe um sinal de %, caso nao encontre, o char sera
immpresso e somado a count, que eh o controle de quantos chars foram impressos*/
int	ft_arguments(char s, va_list ap)
{
	int	result;

	result = 0;
	if (!s)
		return (0);
	else if (s == 'c')
		result += ft_putchar(va_arg(ap, int));
	else if (s == 's')
		result += ft_putstr(va_arg(ap, char *));
	else if (s == 'p')
		result += ft_putpointer(va_arg(ap, unsigned long));
	else if (s == 'd' || s == 'i')
		result += ft_putnbr(va_arg(ap, int));
	else if (s == 'u')
		result += ft_putnbr(va_arg(ap, unsigned int));
	else if (s == 'x' || s == 'X')
		result += ft_putpointerhexa(va_arg(ap, unsigned int), s);
	else if (s == '%')
		result += write(1, "%", 1);
	return (result);
}


int	ft_printf(const char *str, ...)
{
	int	count;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '%')
		{
			count += ft_arguments(*(++str), ap);
		}
		else
			count += write(1, str, 1);
		++str;
	}
	va_end(ap);
	return (count);
}


#include <stdio.h>

int main(void)
{
	ft_printf("%u\n", -42);
	printf("%u\n", -42);
}