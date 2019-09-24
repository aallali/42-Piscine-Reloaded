/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:27:20 by aallali           #+#    #+#             */
/*   Updated: 2018/10/07 22:14:13 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;
	int size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(int) * size);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
