/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:03:36 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/08 16:05:45 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	_a;
	t_stack	_b;

	_a = (t_stack){0};
	_b = (t_stack){0};
	if (ac < 2)
		error_handling(&_a, &_b, 1);
	parsing_args(&_a, &_b, ac, av);
	assign_index(&_a);
	sorting(&_a, &_b);
	deallocate_stacks(&_a, &_b);
	return (0);
}
