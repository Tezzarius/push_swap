/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:29:19 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 09:35:23 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(char *s)
{
	int		i;
	long	d;
	long	sign;

	d = 0;
	i = 0;
	sign = 1;
	if (s[i] == '-')
		sign = -sign;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		error_handling(2);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			error_handling(2);
		d = d * 10 + (s[i] - '0');
		i++;
	}
	d *= sign;
	if (d < INT_MIN || d > INT_MAX)
		error_handling(3);
	return (d);
}

long	*parsing_stack(char **av)
{
	int		i;
	int		count;
	long	*stack;

	i = 0;
	count = 0;
	while (av[count])
		count++;
	stack = malloc(sizeof(long) * count);
	if (!stack)
		error_handling(4);
	while (av[++i])
		stack[i - 1] = ft_atol(av[i]);
	return (stack);
}
