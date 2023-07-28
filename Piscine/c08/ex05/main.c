/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:18:50 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/25 23:08:48 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(t_stock_str *par);

int	main(int argc, char **argv)
{
	t_stock_str *str_tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(str_tab);
	return (0);
}
