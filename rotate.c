/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:18:48 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/24 09:54:32 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_stack(t_stack *stack)
{
	t_dll *tail;
	t_dll *head;
	
	if (!stack || !stack->next)
		return ;
	tail = stack->tail;
	head = stack->head;
	tail->next->prev = NULL
	stack->tail = tail->next;
	tail->next = NULL;
	tail->prev = head;
	head->next = tail;
	stack->head = tail;	
}

void	ra(t_stack *stack_a)
{
	rotate_stack(stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack *stack_b)
{
	rotate_stack(stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate_stack(stack_a);
	rotate_stack(stack_b);
	ft_printf("rr\n");
}
