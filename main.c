/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:03:36 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/24 12:53:09 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac < 2)
		error_handling(1);
	stack_a = (t_stack){0};
	stack_b = (t_stack){0};
	parsing_args(&stack_a, ac, av);

	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);

	
	ft_dlloutput_forward(stack_a.tail);
	ft_printf("\n");
	ft_dlloutput_forward(stack_b.tail);
	ft_dlldeallocate(&stack_a.tail, &stack_a.head);
	ft_dlldeallocate(&stack_b.tail, &stack_b.head);
	return (0);
}
