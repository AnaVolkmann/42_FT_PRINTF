/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavolkmann <anavolkmann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:15:57 by anavolkmann       #+#    #+#             */
/*   Updated: 2024/05/09 10:33:36 by anavolkmann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int nbr)
{
    int result;

    result = 0;
    if (nbr == -2147483648)
    {
        result += write(1, "-2147483648", 11);
        return (result);
    }
    if (nbr < 0)
    {
        result += ft_putchar('-');
        nbr *= -1;
    }
    if (nbr < 10)
        result += ft_putchar(nbr + 48);
    else
    {
        result += ft_putnbr((nbr / 10));
        result += ft_putnbr((nbr % 10));
    }
    return (result);
}