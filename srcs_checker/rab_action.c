/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rab_action.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:43:19 by cmcgahan          #+#    #+#             */
/*   Updated: 2021/03/08 16:43:20 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rab_action(int *stack, int len_stack)
{
	int i;
	int tmp;

	i = 0;
	tmp = stack[0];
	while (i < len_stack - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[len_stack - 1] = tmp;
}

void	rr_action(t_check *c)
{
	rab_action(c->stack_a, c->len_a);
	rab_action(c->stack_b, c->len_b);
}
