/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:07:21 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 15:15:29 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	t_dll	*first;
	t_dll	*second;

	if (!stack_a->tail || stack_a->tail->next)
		return ;
	first = stack_a->tail;
	second = curr->next;
	first->next = second->next;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	stack_a->tail = second;
}

void	sb(t_stack *stack_b)
{
	t_dll	*first;
	t_dll	*second;

	if (!stack_b->tail || stack_b->tail->next)
		return ;
	first = stack_b->tail;
	second = curr->next;
	first->next = second->next;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	stack_b->tail = second;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a->tail || !stack_a->tail->next)
		return ;
	ft_dlladd_beginning(stack_b->tail, stack_a->tail->content);
	ft_dllremove_node(stack_a->tail);
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_b->tail || !stack_b->tail->next)
		return ;
	ft_dlladd_beginning(stack_a->tail, stack_b->tail->content);
	ft_dllremove_node(stack_b->tail);
	ft_printf("pb\n");
}
