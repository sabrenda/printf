/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 06:02:39 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 07:18:16 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(const char **str, va_list ap)
{
	t_f		t_flag;

	ft_init_flags(t_flag);
	ft_init_type(t_flag);
	while (**str != '\0')
	{
		if (ft_strchr("-+ #0", **str))
			ft_parser_flags(str, t_flag);
		else if ((**str == '*' || ft_isdigit(str)) && !(t_flag.d_flag_on))
			ft_width(str, ap, t_flag);
		else if (**str == '.')
			ft_dot(str, ap, t_flag);
		else if ((**str == 'l' || **str == 'h') && !(t_flag.lh_flag_on))
			ft_llhh(str, t_flag);
		else if (ft_strchr("cspdiuxXnfge", **str) || **str == '%')
			return (ft_type(str, ap, t_flag));
		(*str)++;
	}
	return (ft_type(str, ap, t_flag));
}
