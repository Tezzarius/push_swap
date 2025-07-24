/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_revers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:19:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/24 10:10:13 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_reverse_stack(t_stack *stack)
{
	t_dll	*tail;
	t_dll	*head;

	if (!stack || !stack->next)
		return ;
	tail = stack->tail;
	head = stack->head;
	head->prev->next = NULL;
	stack->head = head->prev;
	head->prev = NULL;
	head->next = tail;
	tail->prev = head;
	stack->tail = head;
}

void	rra(t_stack *stack_a)
{
	rotate_reverse_stack(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack *stack_b)
{
	rotate_reverse_stack(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rotate_reverse_stack(stack_a);
	rotate_reverse_stack(stack_b);
	ft_printf("rrr\n");
}
