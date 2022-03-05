/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:40:58 by ajordan-          #+#    #+#             */
/*   Updated: 2021/10/19 14:53:21 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_printchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

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
		// write(1, &str[i], 1);
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