/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:25:47 by rpocater          #+#    #+#             */
/*   Updated: 2024/01/26 15:29:23 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_commands_two(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strncmp(line, "ra", 100)))
	{
		rotate(stack_a);
		return (0);
	}
	else if (!(ft_strncmp(line, "rb", 100)))
	{
		rotate(stack_b);
		return (0);
	}
	else if (!(ft_strncmp(line, "rr", 100)))
	{
		rotate(stack_a);
		rotate(stack_b);
		return (0);
	}
	else
		return (do_commands_three(line, stack_a, stack_b));
}

int	do_commands(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strncmp(line, "sa", 100)))
	{
		swap(stack_a);
		return (0);
	}
	else if (!(ft_strncmp(line, "sb", 100)))
	{
		swap(stack_b);
		return (0);
	}
	else if (!(ft_strncmp(line, "ss", 100)))
	{
		swap(stack_a);
		swap(stack_b);
		return (0);
	}
	else if (!(ft_strncmp(line, "pa", 100)))
	{
		push(stack_a, stack_b);
		return (0);
	}
	else
		return (do_commands_two(line, stack_a, stack_b));
}

void	print_checker_res(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a) && ft_lstsize(*stack_b) == 0)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	if (*stack_a)
		free_stack(stack_a);
	if (*stack_b)
		free_stack(stack_b);
}

static void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*line;

	if (argc < 2)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_a || !stack_b)
		return (0);
	*stack_a = NULL;
	*stack_b = NULL;
	ft_check_args(argc, argv);
	init_stack(stack_a, argc, argv);
	while (get_next_line(0, &line))
	{
		if (do_commands(line, stack_a, stack_b))
		{
			ft_error("Error");
			return (-1);
		}
		free(line);
	}
	print_checker_res(stack_a, stack_b);
	return (0);
}
