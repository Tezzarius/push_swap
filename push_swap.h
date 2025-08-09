/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:06:15 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/09 14:38:09 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define RED	"\e[1;91m"
# define RESET	"\x1b[0m"

# include "./libft/libft.h"
# include <ctype.h>

typedef struct s_stack
{
	t_dll	*tail;
	t_dll	*head;
	size_t	size;
	char	**array;
}	t_stack;

int		is_sorted(t_stack *_a);
size_t	stack_size(t_stack *stack);
void	assign_index(t_stack *stack);
void	sorting(t_stack *_a, t_stack *_b);
void	deallocate_stacks(t_stack *_a, t_stack *_b);
void	error_handling(t_stack *_a, t_stack *_b, size_t i);
void	parsing_args(t_stack *_a, t_stack *_b, int ac, char **av);

//operations
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

//list functions
int		ft_add_end(t_dll **head, int value);
t_dll	*ft_find_node(t_dll *tail, int value);
void	ft_deallocate(t_dll **tail, t_dll **head);
int		ft_init(t_dll **tail, t_dll **head, int value);

#endif
