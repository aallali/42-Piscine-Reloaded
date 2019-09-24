/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:01:18 by aallali           #+#    #+#             */
/*   Updated: 2018/10/08 01:55:58 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*rendu;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	rendu = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		rendu[i] = src[i];
		i++;
	}
	rendu[i] = '\0';
	return (rendu);
}
