/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:45:18 by aallali           #+#    #+#             */
/*   Updated: 2018/10/04 19:25:51 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
