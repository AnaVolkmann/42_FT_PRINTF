/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavolkmann <anavolkmann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:31:39 by anavolkmann       #+#    #+#             */
/*   Updated: 2024/05/09 10:33:36 by anavolkmann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;
    if (!str)
    {
        result = write(1, "(null)", 6);
        return (result);
    }
    while (str[i])
        result += write(1, &str[i++], 1);
    return (result);
}