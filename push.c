/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:07:21 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/24 10:03:35 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_to_stack(t_stack *from, t_stack *to)
{
	t_stack	tmp;
	
	if (!from->tail || !from->tail->next)
		return ;
	ft_dlladd_beginning(to->tail, from->tail->content);
	tmp = from->tail;
	from->tail->next->prev = NULL;
	from->tail = from->tail->next;
	free(tmp);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push_to_stack(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push_to_stack(stack_b, stack_a);
	ft_printf("pb\n");
}
