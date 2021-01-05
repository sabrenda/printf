/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:47:53 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/05 17:01:45 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	//char	*str_copy;
	int		count_printf;
	va_list	print_arg;

	count_printf  = 0;
	//str_copy = ft_strdup(str);
	va_start(print_arg, str);
	count_printf += ft_work_printf(str, print_arg);
	va_end(print_arg);
	//free(str_copy);
	return (count_printf);
	printf("");
}
