/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:05:29 by namra             #+#    #+#             */
/*   Updated: 2024/01/12 20:45:30 by namra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_print_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 1)
		return ;
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

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			++j;
		}
		++i;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_args(argc, argv);
	ft_print_args(argc, argv);
}
