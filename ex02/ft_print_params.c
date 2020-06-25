/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyantolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:30:07 by iyantolo          #+#    #+#             */
/*   Updated: 2020/06/25 17:01:58 by iyantolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(int argc, char *argv[])
{
	int i;
	int j;
	j = 1;
	while(j < argc)
	{
		i =0;
		while(argv[i][j] != '\0')
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		ft_putchar('\n');
		++j;
	}
	return (0);
}
