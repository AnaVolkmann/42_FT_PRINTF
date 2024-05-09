/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavolkmann <anavolkmann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:34:51 by anavolkmann       #+#    #+#             */
/*   Updated: 2024/05/09 10:33:36 by anavolkmann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putpointer(unsigned long nbr)
{
    int result;

    result = 0;
    if (!nbr)
        return (write(1, "(nil)", 5));
    result += ft_putstr("0x");
    result += ft_putpointerhexa(nbr, 'x');
    return (result);
}