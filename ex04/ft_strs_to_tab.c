/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:03:29 by mac               #+#    #+#             */
/*   Updated: 2022/08/01 15:33:27 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	get_str_size(char *str)
{
	int	ret;

	ret = 0;
	while (str[ret])
		++ret;
	return (ret);
}

void	str_cpy(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < ac)
	{
		ret[i].size = get_str_size(av[i]);
		ret[i].str = (char *)malloc(ret[i].size + 1);
		ret[i].copy = (char *)malloc(ret[i].size + 1);
		str_cpy(ret[i].str, av[i]);
		str_cpy(ret[i].copy, av[i]);
		++i;
	}
	ret[i].str = 0;
	return (ret);
}


