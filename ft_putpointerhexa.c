/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointerhexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavolkmann <anavolkmann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:30:21 by anavolkmann       #+#    #+#             */
/*   Updated: 2024/05/09 10:33:36 by anavolkmann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putpointerhexa(unsigned int nbr, char c)
{
    char *base;
    int result;

    result = 0;
    if (c == 'x')
        base = "0123456789abcdef";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    if (nbr > 16)
    {
        result += ft_putpointerhexa((nbr / 16), c);
        result += ft_putpointerhexa((nbr % 16), c);
    }
    else
        result += write(1, &base[nbr], 1);
    return (result);
}