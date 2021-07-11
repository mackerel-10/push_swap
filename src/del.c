/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 02:39:28 by sujeon            #+#    #+#             */
/*   Updated: 2021/07/12 06:10:15 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_sort(t_stack *info)
{
	int	i = 0;
	t_node *stack_a = info[0].top;
	t_node *stack_b = info[1].top;
	
	printf("\nstack\n");
	printf("--------------------------\n");
	while (stack_a || stack_b)
	{
		printf("[%2d]\t|", i);
		if (stack_a)
		{
			printf("\t%2d", stack_a->num);
			stack_a = stack_a->next;
		}
		else
			printf("\t\t");
		if (stack_b)
		{
			printf("\t%2d", stack_b->num);
			stack_b = stack_b->next;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}

void	print_info(t_stack *info)
{
	printf("\nstack info\n");
	printf("--------------------------\n");
	printf("size|\t%d\t%d\n", info[0].size, info[1].size);
	printf("top |");
	if (info[0].top)
		printf("\t%d", info[0].top->num);
	else
		printf("\t");
	if (info[1].top)
		printf("\t%d", info[1].top->num);
	printf("\n");
	printf("bot |");
	if (info[0].bot)
		printf("\t%d", info[0].bot->num);
	else
		printf("\t");
	if (info[1].bot)
		printf("\t%d\n", info[1].bot->num);
	else
		printf("\t\n");
	printf("--------------------------\n");
}