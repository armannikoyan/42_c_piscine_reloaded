/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:50:14 by namra             #+#    #+#             */
/*   Updated: 2024/01/14 18:23:44 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 4096

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
}

#include <stdio.h>

void	display_file(char *filename, char *buffer)
{
	int	fd;
	int	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while(1)
	{
		bytes_read = read(fd, buffer, BUFF_SIZE);
		if (bytes_read <= 0)
			break ;
		else if (bytes_read == -1)
		{
			close(fd);
			return ;
		}
		buffer[bytes_read] = '\0';
		ft_putstr(buffer);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	char	buffer[BUFF_SIZE];

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	display_file(argv[1], &buffer[0]);
	return (0);
}
