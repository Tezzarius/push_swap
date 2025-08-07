/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:50:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 14:03:27 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack)
{
	t_dll	*curr;
	t_dll	*cmp;
	size_t	index;

	curr = stack->tail;
	stack->size = 0;
	while (curr)
	{
		index = 1;
		cmp = stack->tail;
		while (cmp)
		{
			if (cmp->content < curr->content)
				index++;
			cmp = cmp->next;
		}
		curr->index = index;
		curr = curr->next;
		if (stack->size < index)
			stack->size = index;
	}
}
