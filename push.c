/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:07:21 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/24 13:28:24 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push_to_stack(t_stack *from, t_stack *to)
{
	t_dll	*tmp;

	if (!from->tail)
		return (0);
	tmp = from->tail;
	if (tmp->next)
	{
		from->tail = tmp->next;
		tmp->next->prev = NULL;
	}
	else
	{
		from->tail = NULL;
		from->head = NULL;
	}
	if (!to->tail)
		tmp->next = NULL;
	else
	{
		tmp->next = to->tail;
		to->tail->prev = tmp;
	}
	tmp->prev = NULL;
	to->tail = tmp;
	return (1);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (push_to_stack(stack_a, stack_b))
		ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (push_to_stack(stack_b, stack_a))
		ft_printf("pb\n");
}
