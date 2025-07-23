/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:03:36 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 14:03:34 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;

	stack_a = (t_stack){0};
	if (ac < 2)
		error_handling(1);
	parsing_args(&stack_a, ac, av);
	ft_dlloutput_forward(stack_a.tail);
	ft_dlldeallocate(&stack_a.tail, &stack_a.head);
	return (0);
}
