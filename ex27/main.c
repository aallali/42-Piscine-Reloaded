/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 21:10:06 by aallali           #+#    #+#             */
/*   Updated: 2018/10/07 22:26:11 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#define BUFF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	buff[BUFF_SIZE + 1];

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		x = open(argv[1], O_RDONLY);
		y = read(x, buff, BUFF_SIZE);
		buff[y] = '\0';
		ft_putstr(buff);
		close(x);
	}
	else
		write(2, "Too many arguments.\n", 20);
}
