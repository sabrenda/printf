/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:45:19 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:33:23 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_toupper(char *ch, t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->up_x_zero = 1;
	while (ch[i])
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = (ch[i] - 32);
		i++;
	}
}
