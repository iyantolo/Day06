/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyantolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:36:37 by iyantolo          #+#    #+#             */
/*   Updated: 2020/06/25 16:49:55 by iyantolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int 	main(int argc, char **argv)
{
	int i;
	i = 0;
	if( argc > 0)
	{
		while(argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			++i;
		}
		ft_putchar('\n');
	}
	return 0;
}

