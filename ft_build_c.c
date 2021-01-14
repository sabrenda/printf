/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:01:28 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/15 00:23:32 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_c(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_c = va_arg(ap, int);
	if (t_flag->minus)
	{
		write(1, &t_flag->type_c, 1);
		i += ft_width_flag_work(t_flag, 1);
	}
	else
	{
		i += ft_width_flag_work(t_flag, 1);
		write(1, &t_flag->type_c, 1);
	}
	printf("%d\n", i);//=================
	return (i);
}
