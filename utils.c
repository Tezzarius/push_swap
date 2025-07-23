/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:03 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 09:56:02 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handling(int i)
{
	if (i == 1)
		ft_putstr_fd("Error: to few arguments\n", 2);
	if (i == 2)
		ft_putstr_fd("Error: not only integers in the stack\n", 2);
	if (i == 3)
		ft_putstr_fd("Error: int overflow", 2);
	if (i == 4)
		ft_putstr_fd("Error: failed to allocate memory", 2);
	if (i == 5)
		ft_putstr_fd("Error: double number", 2);
	exit (0);
}
