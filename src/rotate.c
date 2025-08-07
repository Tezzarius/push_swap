/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:18:48 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 14:10:48 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate_stack(t_stack *stack)
{
	t_dll	*first;
	t_dll	*last;

	if (!stack || !stack->tail || !stack->tail->next)
		return (0);
	first = stack->tail;
	last = first;
	while (last->next)
		last = last->next;
	stack->tail = first->next;
	stack->tail->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	stack->head = first;
	return (1);
}

void	ra(t_stack *_a)
{
	if (rotate_stack(_a))
		ft_printf("ra\n");
}

void	rb(t_stack *_b)
{
	if (rotate_stack(_b))
		ft_printf("rb\n");
}

void	rr(t_stack *_a, t_stack *_b)
{
	size_t	p;

	p = 0;
	if (rotate_stack(_a))
		p = 1;
	if (rotate_stack(_b))
		p = 1;
	if (p == 1)
		ft_printf("rr\n");
}
