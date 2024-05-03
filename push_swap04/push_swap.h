/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:25:20 by rpocater          #+#    #+#             */
/*   Updated: 2024/01/13 14:51:46 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_front(t_list **stack, t_list *new);
void	ft_lstadd_back(t_list **stack, t_list *new);
void	print_list(t_list *head);
int		ft_lstsize(t_list *head);
void	ft_error(char *msg);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
void	make_top(t_list **stack, int distance);
void	free_stack(t_list **stack);
void	ft_free(char **str);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	index_stack(t_list **stack);
void	sort_5(t_list **stack_a, t_list **stack_b);
int		swap(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		reverse_rotate(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
int		trick(t_list **stack_a);
void	big_trick(t_list **stack_a, t_list *head, int min);
int		do_commands_three(char *line, t_list **stack_a, t_list **stack_b);

#endif
