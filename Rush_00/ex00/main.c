/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:37:40 by msodor            #+#    #+#             */
/*   Updated: 2022/04/02 11:18:27 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		atoi(char *str);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argv[1])
		x = atoi(argv[1]);
	if (argv[2])
		y = atoi(argv[2]);
	rush(x, y);
	return (0);
}

int	atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (str[0] != '-')
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			while (str[i] != '\0')
			{
				if (str[i + 1] != '\0')
				{
					if (str[i + 1] > '9' || str[i + 1] < '0')
						return (0);
				}
				nb *= 10;
				nb += str[i] - 48;
				i++;
			}
		}
	}
	return (nb);
}
