/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:59:56 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:35:51 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_width(const char **str, va_list ap, t_f *t_flag)
{
	if (**str == '*')
		t_flag->width = va_arg(ap, int);
	else
		t_flag->width = ft_atoi(str);
	if (t_flag->width < 0)
	{
		t_flag->minus = 1;
		t_flag->zero = 0;
		t_flag->width *= -1;
	}
}
