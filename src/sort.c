/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:12:30 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 15:55:16 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack *_a)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = _a->tail->index;
	b = _a->tail->next->index;
	c = _a->head->index;
	if (a > b && b > c)
	{
		sa(_a);
		rra(_a);
	}
	else if (a < b && b > c && a > c)
		rra(_a);
	else if (a < b && b > c && a < c)
	{
		sa(_a);
		ra(_a);
	}
	else if (a > b && b < c && a > c)
		ra(_a);
	else if (a > b && b < c && a < c)
		sa(_a);
}

static void	sort_three_reverse(t_stack *_b)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = _b->tail->index;
	b = _b->tail->next->index;
	c = _b->tail->next->next->index;
	if (a < b && b < c)
	{
		sb(_b);
		rrb(_b);
	}
	else if (a < b && b > c && a > c)
		sb(_b);
	else if (a < b && b > c && a < c)
		rb(_b);
	else if (a > b && b < c && a > c)
	{
		rrb(_b);
		sa(_b);
	}
	else if (a > b && b < c && a < c)
		rrb(_b);
}

static void	sort_six(t_stack *_a, t_stack *_b)
{
	int		c;

	c = 3;
	while (_a->tail && c > 0)
	{
		if (_a->tail->index <= 3)
		{
			pb(_a, _b);
			c--;
		}
		else
			ra(_a);
	}
	sort_three_reverse(_b);
	if (!(_a->tail->next->next))
	{
		if (_a->tail->index > _a->tail->next->index)
			sa(_a);
	}
	else
		sort_three(_a);
	while (_b->tail)
		pa(_a, _b);
}

static void	sorting_algorithm(t_stack *_a, t_stack *_b)
{
	size_t		i;
	size_t		j;
	size_t		max_bits;

	i = 0;
	max_bits = 0;
	while ((_a->size - 1) >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < _a->size)
		{
			if (!((_a->tail->index >> i) & 1))
				pb(_a, _b);
			else
				ra(_a);
			j++;
		}
		while (_b->tail)
			pa(_a, _b);
		i++;
	}
}

void	sorting(t_stack *_a, t_stack *_b)
{
	if (_a->tail->index > _a->tail->next->index && _a->size == 1)
		return (sa(_a));
	else if (_a->size == 3)
		sort_three(_a);
	else if (_a->size > 3 && _a->size <= 6)
		sort_six(_a, _b);
	else if (_a->size > 6)
		sorting_algorithm(_a, _b);
}
