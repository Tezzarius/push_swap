/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:52:32 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 14:11:03 by bschwarz         ###   ########.fr       */
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
	second = first->next;
	first->next = second->next;
	if (first->next)
		first->next->prev = first;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	stack->tail = second;
	if (!first->next)
		stack->head = first;
	return (1);
}

void	sa(t_stack *_a)
{
	if (swap_stack(_a))
		ft_printf("sa\n");
}

void	sb(t_stack *_b)
{
	if (swap_stack(_b))
		ft_printf("sb\n");
}

void	ss(t_stack *_a, t_stack *_b)
{
	size_t	p;

	p = 0;
	if (swap_stack(_a))
		p = 1;
	if (swap_stack(_b))
		p = 1;
	if (p == 1)
		ft_printf("ss\n");
}
