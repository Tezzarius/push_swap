/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:19:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 14:10:35 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate_reverse_stack(t_stack *stack)
{
	t_dll	*first;
	t_dll	*last;

	if (!stack || !stack->tail || !stack->tail->next)
		return (0);
	first = stack->tail;
	last = first;
	while (last->next)
		last = last->next;
	stack->head = last->prev;
	last->prev->next = NULL;
	first->prev = last;
	last->next = first;
	last->prev = NULL;
	stack->tail = last;
	return (1);
}

void	rra(t_stack *_a)
{
	if (rotate_reverse_stack(_a))
		ft_printf("rra\n");
}

void	rrb(t_stack *_b)
{
	if (rotate_reverse_stack(_b))
		ft_printf("rrb\n");
}

void	rrr(t_stack *_a, t_stack *_b)
{
	size_t	p;

	p = 0;
	if (rotate_reverse_stack(_a))
		p = 1;
	if (rotate_reverse_stack(_b))
		p = 1;
	if (p == 1)
		ft_printf("rrr\n");
}
