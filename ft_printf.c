/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:27:52 by acasale           #+#    #+#             */
/*   Updated: 2023/05/21 16:41:32 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_types(va_list arg, const char type)
{
	int	lenght;

	lenght = 0;
	if (type == 'c')
		lenght += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		lenght += ft_putstr(va_arg(arg, char *));
}

int	ft_printf(const char *, ...)
{

}
