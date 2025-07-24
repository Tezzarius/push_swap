/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:52:32 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/24 09:56:26 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_stack(t_stack *stack)
{
	t_dll	*first;
	t_dll	*second;

	if (!stack->tail || stack->tail->next)
		return ;
	first = stack->tail;
	second = curr->next;
	first->next = second->next;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	stack->tail = second;	
}

void	sa(t_stack *stack_a)
{
	swap_stack(stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	swap_stack(stack_b);
	ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap_stack(stack_a);
	swap_stack(stack_b);
	ft_printf("ss\n");
}
