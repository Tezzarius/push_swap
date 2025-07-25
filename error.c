/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:03 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 14:03:51 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handling(int i)
{
	if (i == 1)
		ft_putstr_fd("Error: to few arguments\n", 2);
	else if (i == 2)
		ft_putstr_fd("Error: non integer input detected\n", 2);
	else if (i == 3)
		ft_putstr_fd("Error: int overflow", 2);
	else if (i == 4)
		ft_putstr_fd("Error: duplicate detected", 2);
	else
		ft_putstr_fd("Error", 2);
	exit (0);
}
