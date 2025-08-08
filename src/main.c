/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:03:36 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/08 14:56:21 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	_a;
	t_stack	_b;

	if (ac < 2)
		error_handling(1);
	_a = (t_stack){0};
	_b = (t_stack){0};
	parsing_args(&_a, ac, av);
	assign_index(&_a);
	sorting(&_a, &_b);
	
	// ft_printf("\nstack_a:\n");
	// ft_dlloutput_forward(_a.tail);
	ft_dlldeallocate(&_a.tail, &_a.head);
	ft_dlldeallocate(&_b.tail, &_b.head);
	return (0);
}
