/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:07:21 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 10:47:08 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push_(t_stack *from, t_stack *to)
{
	t_dll	*tmp;

	if (!from || !from->tail)
		return (0);
	tmp = from->tail;
	from->tail = from->tail->next;
	if (from->tail)
		from->tail->prev = NULL;
	tmp->next = to->tail;
	if (to->tail)
		to->tail->prev = tmp;
	to->tail = tmp;
	return (1);
}

void	pa(t_stack *_a, t_stack *_b)
{
	if (push_(_b, _a))
		ft_printf("pa\n");
}

void	pb(t_stack *_a, t_stack *_b)
{
	if (push_(_a, _b))
		ft_printf("pb\n");
}
