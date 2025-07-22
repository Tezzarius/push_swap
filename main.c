/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:03:36 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/22 17:54:34 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fillstack(t_stack_a **tail, t_stack_a **head, char **av)
{
	long	*args;
	int		i;

	i = -1;
	args = parsing_stack(av);
	if (!args)
		error_handling(3);
	ft_dllinit(tail, head, (int)args[++i]);
	while (args[++i])
		ft_dlladd_end(head, (int)args[i]);
	free(args);
}

int	main(int ac, char **av)
{
	t_stack_a	*tail;
	t_stack_a	*head;

	tail = NULL;
	head = NULL;
	if (ac < 2)
		error_handling(1);
	fillstack(&tail, &head, av);
	ft_dlloutput_forward(tail);
	ft_dlldeallocate(&tail, &head);
	return (0);
}
