/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:26:49 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/11 15:26:50 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	next_prime(int num)
{
	int	i;

	i = 2;
	if (num == 1 || num < 0)
	{
		return (0);
	}
	while (i <= num / i)
	{
		if (num % i != 0)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}

int	ft_find_next_prime(int nb)
{
	while (next_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 4;
// 	printf("%i", ft_find_next_prime(a));
// }