/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlldeallocate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:13:11 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/25 12:30:53 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlldeallocate(t_dll **tail, t_dll **head)
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
