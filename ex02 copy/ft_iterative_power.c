/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:57:27 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 17:57:29 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 3;
// 	int power = 2;
// 	printf("%i", ft_iterative_power(a, power));
// }