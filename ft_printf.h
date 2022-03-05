/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:51:37 by ppetchda          #+#    #+#             */
/*   Updated: 2022/03/03 10:21:42 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
int		ft_print_char(int c);
int		ft_print_str(char *str);
// int		ft_print_ptr(unsigned long long ptr);
int		ft_print_nbr(int n);
// int		ft_print_unsigned(unsigned int n);
// int		ft_print_hex(unsigned int num, const char format);
int		ft_print_percent(void);

// void	ft_put_ptr(uintptr_t num);
// int		ft_ptr_len(uintptr_t num);
// char	*ft_uitoa(unsigned int n);
// int		ft_num_len(unsigned	int num);
// void	ft_put_hex(unsigned int num, const char format);
// int		ft_hex_len(unsigned	int num);

#endif
