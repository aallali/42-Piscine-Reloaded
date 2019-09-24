/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:24:31 by aallali           #+#    #+#             */
/*   Updated: 2018/10/08 01:46:34 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 0 && nb <= 13)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	else
	{
		return (0);
	}
}
