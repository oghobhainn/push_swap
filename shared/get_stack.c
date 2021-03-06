/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:41:00 by cmcgahan          #+#    #+#             */
/*   Updated: 2021/03/11 16:46:43 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared.h"

int		*get_stack(int len_a, char **argv)
{
	int	i;
	int j;
	int	*stack;

	i = 0;
	j = 0;
	if (!(stack = malloc_and_fill(len_a)))
		return (NULL);
	while (i < len_a)
	{
		if (check_if_number(argv[i]) == 1)
			stack[j] = ft_atoi_ps(argv[i]);
		else
		{
			free(stack);
			ft_exit("Error: invalid argument\n", 2);
		}
		i++;
		j++;
	}
	return (stack);
}
