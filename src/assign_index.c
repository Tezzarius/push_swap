/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:50:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/08 10:04:15 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	stack_size(t_stack *stack)
{
	t_dll	*curr;
	size_t	size;

	size = 0;
	curr = stack->tail;
	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return (size);
}

void	assign_index(t_stack *stack)
{
	t_dll	*curr;
	t_dll	*cmp;
	size_t	index;

	curr = stack->tail;
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
	}
	stack->size = stack_size(stack);
}
