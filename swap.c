/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:52:32 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/25 14:25:55 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap_stack(t_stack *stack)
{
	t_dll	*first;
	t_dll	*second;

	if (!stack || !stack->tail || !stack->tail->next)
		return (0);
	first = stack->tail;
	second = stack->tail->next;
	first->next = second->next;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	stack->tail = second;
	return (1);
}

void	sa(t_stack *stack_a)
{
	if (swap_stack(stack_a))
		ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	if (swap_stack(stack_b))
		ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	p;
	
	p = 0;
	if (swap_stack(stack_a))
		p = 1;
	if (swap_stack(stack_b))
		p = 1;
	if (p == 1)
	{
		ft_printf("ss\n");
		p = 0;
	}
}
