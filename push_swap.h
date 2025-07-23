/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:06:15 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/23 14:03:28 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_stack
{
	t_dll	*tail;
	t_dll	*head;
}	t_stack;

void	error_handling(int i);
t_stack	*parsing_args(t_stack *stack_a, int ac, char **av);

#endif
