/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:03 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/08 16:26:38 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	deallocate_stacks(t_stack *_a, t_stack *_b)
{
	ft_deallocate(&_a->tail, &_a->head);
	ft_deallocate(&_b->tail, &_b->head);
}

void	error_handling(t_stack *_a, t_stack *_b, size_t i)
{
	deallocate_stacks(_a, _b);
	if (_a->array)
		ft_free(_a->array);
	if (i == 1)
		ft_putstr_fd("Error: to few arguments\n", 2);
	else if (i == 2)
		ft_putstr_fd("Error: non integer input detected\n", 2);
	else if (i == 3)
		ft_putstr_fd("Error: int overflow\n", 2);
	else if (i == 4)
		ft_putstr_fd("Error: duplicate detected\n", 2);
	else
		ft_putstr_fd("Error\n", 2);
	exit (0);
}
