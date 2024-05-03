/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:31:00 by rpocater          #+#    #+#             */
/*   Updated: 2024/01/13 14:50:19 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_commands_three(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strncmp(line, "pb", 100)))
	{
		push(stack_b, stack_a);
		return (0);
	}
	if (!(ft_strncmp(line, "rra", 100)))
	{
		reverse_rotate(stack_a);
		return (0);
	}
	if (!(ft_strncmp(line, "rrb", 100)))
	{
		reverse_rotate(stack_b);
		return (0);
	}
	if (!(ft_strncmp(line, "rrr", 100)))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		return (0);
	}
	return (1);
}
