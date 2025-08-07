/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:29:19 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/07 15:48:09 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_satol(char *s)
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

t_stack	*parsing_args(t_stack *_a, int ac, char **av)
{
	ssize_t		i;
	ssize_t		j;
	long		num;
	char		**tmp;

	i = 0;
	while (++i < (ssize_t)ac)
	{
		tmp = ft_split(av[i], ' ');
		if (!tmp || !*tmp)
			error_handling(0);
		j = -1;
		while (tmp[++j])
		{
			num = ft_satol(tmp[j]);
			if (ft_dllfind_node(_a->tail, num))
				error_handling(4);
			if (!_a->head)
				ft_dllinit(&_a->tail, &_a->head, (int)num);
			else
				ft_dlladd_end(&_a->head, (int)num);
		}
		ft_free(tmp);
	}
	return (_a);
}
