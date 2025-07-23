/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:03:36 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 09:55:32 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fillstack(t_dll **tail, t_dll **head, char **av)
{
	long	*args;
	int		i;

	i = -1;
	args = parsing_stack(av);
	if (!args)
		error_handling(3);
	ft_dllinit(tail, head, (int)args[++i]);
	while (args[++i])
	{
		if (ft_dllfind_node(*tail, args[i]))
			error_handling(5);
		ft_dlladd_end(head, (int)args[i]);
	}
	free(args);
}

int	main(int ac, char **av)
{
	t_dll	*tail;
	t_dll	*head;

	tail = NULL;
	head = NULL;
	if (ac < 2)
		error_handling(1);
	fillstack(&tail, &head, av);
	ft_dlloutput_forward(tail);
	ft_dlldeallocate(&tail, &head);
	return (0);
}
