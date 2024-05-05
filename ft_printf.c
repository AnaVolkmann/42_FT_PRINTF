/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:50:50 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/05/05 18:26:19 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

/** @brief */

/* linha: 29- verifico se existe um sinal de %, se sim faco uma verificacao
se algum do chars passados em seguida sao flags, caso nao encontre, o char sera
immpresso e somado a count, que eh o controle de quantos chars foram impressos*/

int	ft_printf(const char *str, ...)
{
	int	count;
	int	i;
	va_list	ap;

	count = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
			count += ft_arguments(str, i++, ap);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

int	ft_arguments(const char *s, int i, va_list ap)
{
	if (s[i] == 'c')
		return (ft_putchr(s[i + 1]));
	if (s[i] == 's')
		return (ft_putstr(s[i + 1]));
	if (s[i] == 'd')
}