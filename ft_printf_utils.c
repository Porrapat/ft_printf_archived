/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:51:37 by ppetchda          #+#    #+#             */
/*   Updated: 2022/03/03 10:21:42 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

// int	ft_printnbr(int n)
// {
// 	int		len;
// 	char	*num;

// 	len = 0;
// 	num = ft_itoa(n);
// 	len = ft_printstr(num);
// 	free(num);
// 	return (len);
// }

int	ft_printpercent(void)
{
	return (ft_printchar('%'));
}
