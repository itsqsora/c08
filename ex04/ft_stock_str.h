/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:28:06 by mac               #+#    #+#             */
/*   Updated: 2022/08/01 15:34:25 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

typedef struct s_stock_str
{
    int size;
    char    *str;
    char    *copy;
}       t_stock_str;

void    ft_show_tab(struct s_stock_str *par);
t_stock_str *ft_strs_to_tab(int ac, char **av);
void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);

#endif
