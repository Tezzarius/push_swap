/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:29:19 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/08 16:24:22 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_satol(t_stack *_a, t_stack *_b, char *s)
{
	ssize_t		i;
	long		d;
	long		sign;

	d = 0;
	i = 0;
	sign = 1;
	if (s[i] == '-')
		sign = -sign;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		error_handling(_a, _b, 2);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			error_handling(_a, _b, 2);
		d = d * 10 + (s[i] - '0');
		i++;
	}
	d *= sign;
	if (d < INT_MIN || d > INT_MAX)
		error_handling(_a, _b, 3);
	return (d);
}

void	parsing_args(t_stack *_a, t_stack *_b, int ac, char **av)
{
	ssize_t		i;
	ssize_t		j;
	long		num;

	i = 0;
	while (++i < (ssize_t)ac)
	{
		_a->array = ft_split(av[i], ' ');
		if (!_a->array || !*_a->array)
			error_handling(_a, _b, 0);
		j = -1;
		while (_a->array[++j])
		{
			num = ft_satol(_a, _b, _a->array[j]);
			if (ft_find_node(_a->tail, num))
				error_handling(_a, _b, 4);
			if (!_a->head)
				ft_init(&_a->tail, &_a->head, (int)num);
			else
				ft_add_end(&_a->head, (int)num);
		}
		ft_free(_a->array);
	}
}
