/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:39:23 by cmcgahan          #+#    #+#             */
/*   Updated: 2021/03/08 16:39:29 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared.h"

int		count_args(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	return (i);
}
