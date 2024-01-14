/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:58:18 by namra             #+#    #+#             */
/*   Updated: 2024/01/12 20:05:01 by namra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}
