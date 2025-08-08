/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:12:28 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/08 16:28:08 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deallocate(t_dll **tail, t_dll **head)
{
	t_dll	*curr;
	t_dll	*next;

	curr = *tail;
	if (*tail == NULL)
		return ;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*tail = NULL;
	*head = NULL;
}

t_dll	*ft_find_node(t_dll *tail, int value)
{
	t_dll	*curr;

	curr = tail;
	while (curr != NULL)
	{
		if (curr->content == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}

int	ft_add_end(t_dll **head, int value)
{
	t_dll	*new_node;

	new_node = malloc(sizeof(t_dll));
	if (new_node == NULL)
		return (0);
	new_node->content = value;
	new_node->prev = *head;
	new_node->next = NULL;
	(*head)->next = new_node;
	*head = new_node;
	return (1);
}

int	ft_init(t_dll **tail, t_dll **head, int value)
{
	t_dll	*new_node;

	new_node = malloc(sizeof(t_dll));
	if (new_node == NULL)
		return (0);
	new_node->content = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	*tail = new_node;
	*head = new_node;
	return (1);
}
